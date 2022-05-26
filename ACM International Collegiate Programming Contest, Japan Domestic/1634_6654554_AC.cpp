/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1634/judge/6654554/C++17
 * Submitted at: 2022-05-26 17:41:17
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1634
 * Result: AC
 * Execution Time: 0.24 s
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    // 入力
    int n, m;
    cin >> n >> m;
    if (n + m == 0) {
      break;
    }
    vector<long long> a(n), w(m);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
      cin >> w[i];
    }

    // 今の状態で測れるものを全列挙する
    vector<long long> c(0);
    for (int i = 0; i < m; i++) {
      // これまで加えたものに対して、現在見ているおもりを使って加えられるものを追加していく
      // 逆順にしないと、無限ループするので注意
      for (int j = c.size() - 1; j >= 0; j--) {
        c.push_back(c[j] + w[i]);
        c.push_back(abs(c[j] - w[i]));
      }
      // 現在見ているおもりだけを使っても測れる
      c.push_back(w[i]);
    }
    // 便宜上、0も測れるものとする
    c.push_back(0);

    // 昇順にソートして、重複を削除していく
    sort(c.begin(), c.end());
    c.erase(unique(c.begin(), c.end()), c.end());

    // 全列挙したものをsetとして扱う
    set<long long> ct(c.begin(), c.end());

    // 答えとなりうるものを格納するset
    set<long long> ans;

    // 一回でもsetに追加したかを格納する変数
    bool ft = false;

    // 荷物は測れるかどうか
    for (int i = 0; i < n; i++) {
      // 何も追加しなくても測れる場合
      if (ct.count(a[i])) {
        continue;
      }

      // もしまだ何も追加していない場合の初期化
      if (!ft) {
        for (int j = 0; j < c.size(); j++) {
          ans.insert(abs(c[j] - a[i]));
          ans.insert(abs(c[j] + a[i]));
        }
        ft = true;
      }
      // そうではない場合、共通部分をとっていく
      else {
        set<long long> tmp;
        for (int j = 0; j < c.size(); j++) {
          long long x = abs(c[j] - a[i]);
          long long y = abs(c[j] + a[i]);
          if (ans.count(x)) tmp.insert(x);
          if (ans.count(y)) tmp.insert(y);
        }
        // 共通部分とansを入れ替える
        swap(ans, tmp);
      }
    }

    // もし何も追加していない = 何も追加しなくてもすべて測れる場合
    if (!ft) {
      cout << 0 << endl;
    }
    // 共通部分がない
    else if (ans.size() == 0) {
      cout << -1 << endl;
    }
    // 共通部分のうち、最小値
    else {
      cout << *ans.begin() << endl;
    }
  }
  return 0;
}

