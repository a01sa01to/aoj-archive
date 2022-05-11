/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1650/judge/6593258/C++17
 * Submitted at: 2022-05-11 23:52:00
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1650
 * Result: AC
 * Execution Time: 0.17 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef pair<int, int> P;

// 上限・下限の絶対値を10^9とする
constexpr int INF = 1e9;

// ノードを表す構造体
// node.val: 値
// node.neighbors: 隣接するノード
struct node {
  char val;
  vector<int> neighbors;
};

// non-rootを解析する
int parse_nonroot(const string& s, vector<node>& nodes, int& i) {
  if (s[i] == '(') {
    // '('を飛ばす
    ++i;

    // 左の子ノードを解析し、ノードIDを求める
    int l = parse_nonroot(s, nodes, i);

    // 演算子を求める
    char operation = s[i];
    // 次へ
    ++i;

    // 右の子ノードを解析し、ノードIDを求める
    int r = parse_nonroot(s, nodes, i);

    // ')'を飛ばす
    ++i;

    // ノードを作る
    nodes.push_back({ operation, { l, r } });
    int id = nodes.size() - 1;

    // 子ノードに親ノードの対応関係を記録する
    nodes[l].neighbors.push_back(id);
    nodes[r].neighbors.push_back(id);
    return id;
  }
  else {
    // 数字の場合のノードを作る
    nodes.push_back({ s[i], {} });
    int id = nodes.size() - 1;

    // 次へ
    ++i;

    return id;
  }
}

// rootを計算する
void parse(const string& s, vector<node>& nodes) {
  // 現在見ている数字
  int idx = 0;

  // 最初の項を解析する
  int first = parse_nonroot(s, nodes, idx);

  // 演算子をチェックする
  char operation = s[idx];
  // 次へ
  ++idx;

  // 2番目の項を解析する
  int second = parse_nonroot(s, nodes, idx);

  // 演算子は同じはずなので、次へ
  ++idx;

  // 3番目の項を解析する
  int third = parse_nonroot(s, nodes, idx);

  // ノードを作る
  nodes.push_back({ operation, { first, second, third } });
  int id = nodes.size() - 1;

  // 子ノードに親ノードの対応関係を記録する
  nodes[first].neighbors.push_back(id);
  nodes[second].neighbors.push_back(id);
  nodes[third].neighbors.push_back(id);
}

// 探索させる関数
// nodes: ノードの配列
// v: 根とするノード
// prev: 直前にたどったノード（戻るのを防止する）
P tree_search(const vector<node>& nodes, map<P, P>& memo, int v, int prev) {
  // 今見ているノードが葉である場合、その値を返す
  if (isdigit(nodes[v].val)) {
    return memo[{ prev, v }] = { nodes[v].val - '0', nodes[v].val - '0' };
  }

  // 子ノードの値を格納していく
  vector<P> children;

  // 隣接しているノードをたどる
  for (int next_v : nodes[v].neighbors) {
    // 直前にたどったノードは飛ばす
    if (next_v == prev) continue;

    // もしすでに探索していなければ、各ノードに対して探索を行う
    if (!memo.count({ v, next_v })) {
      tree_search(nodes, memo, next_v, v);
    }

    // 子ノードの値を記録する
    children.push_back(memo[{ v, next_v }]);
  }

  // 子ノードの値から、自分自身の値を決める
  P self;
  if (nodes[v].val == '+') {
    self = { 0, 0 };
    // +の場合
    // 最大値は子の最大値の和
    // 最小値は子の最小値の和
    for (auto child : children) {
      self.first += child.first;
      self.second += child.second;
    }
  }
  else if (nodes[v].val == '-') {
    self = { INF, -INF };
    // -の場合
    // 最大値は、左の子ノードの最大値 – 他の最小値の和
    // 最小値は、左の子ノードの最小値 – 他の最大値の和

    // 順列 {0, 1 (,2)} を作る
    vector<int> perm(children.size());
    iota(perm.begin(), perm.end(), 0);

    // どんな順番で並ぶかを全通り試す
    // 最大でも3! = 6通り
    do {
      // 左の子ノード
      P temp = children[perm[0]];

      // ほかの子ノード
      for (int i = 1; i < children.size(); ++i) {
        temp.first -= children[perm[i]].second;
        temp.second -= children[perm[i]].first;
      }

      // 更新する
      self.first = min(self.first, temp.first);
      self.second = max(self.second, temp.second);
    } while (next_permutation(perm.begin(), perm.end()));
  }

  // 記録する
  return memo[{ prev, v }] = self;
}

int main() {
  while (true) {
    // 入力
    string s;
    cin >> s;

    // もし-1なら終了
    if (s == "-1") break;

    // 木
    vector<node> nodes;

    // メモ化
    // memo[{prev_v, v}] = prev_vからvへ行くときの、 {最小値, 最大値}
    map<P, P> memo;

    // 解析する
    int idx = 0;
    parse(s, nodes);

    // 答えを求める
    // すべてのノードに対して、そのノードが根だった時の値を求めていく
    int ans = -INF;
    rep(i, nodes.size()) {
      // もし、ノード値が数字→葉ノードだったら、根にはなりえない
      if (isdigit(nodes[i].val)) continue;

      // 探索させる
      auto t = tree_search(nodes, memo, i, -1);

      // 答えを更新
      ans = max(ans, t.second);
    }

    // 出力
    cout << ans << endl;
  }
  return 0;
}
