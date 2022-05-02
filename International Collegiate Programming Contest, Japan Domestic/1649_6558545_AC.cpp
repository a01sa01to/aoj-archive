/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1649/judge/6558545/C++17
 * Submitted at: 2022-05-02 13:20:52
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1649
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

struct UnionFind {
  vector<int> par;
  UnionFind(int n): par(n, -1) {}

  // 2頂点を結合する
  int unite(int x, int y) {
    int a = root(x), b = root(y);
    if (a == b) return a;
    if (-par[a] < -par[b]) swap(a, b);
    par[a] += par[b];
    par[b] = a;
    return a;
  }

  // 2頂点は連結か
  bool same(int x, int y) {
    return root(x) == root(y);
  }

  // 頂点xの木の根を返す
  int root(int x) {
    if (par[x] < 0) return x;
    return par[x] = root(par[x]);
  }

  // 頂点xが属する木のサイズを返す
  int size(int x) {
    return -par[root(x)];
  }
};

int main() {
  while (true) {
    // 入力
    int w, h;
    cin >> w >> h;

    // もしwとhが両方0であれば、終了
    if (w + h == 0) break;

    // 決められたマスからグラフを生成
    // グラフは[上1, 上2, ..., 上w, 左1, 左2, ..., 左h]とする
    UnionFind uf(w + h);
    rep(_, w + h - 1) {
      int x, y, n;
      cin >> x >> y >> n;
      --x, --y;
      uf.unite(x, y + w);
    }

    // 全頂点が連結であるか調べる
    // この場合、頂点0と連結な頂点数 = w+h かどうかをチェックしている
    bool existsNonvisited = (w + h != uf.size(0));
    // 連結であればYes、そうでなければNo。
    cout << (existsNonvisited ? "NO" : "YES") << endl;
  }
  return 0;
}
