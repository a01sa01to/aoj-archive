/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1641/judge/6617296/C++17
 * Submitted at: 2022-05-18 12:37:25
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1641
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    // 入力
    int m, n, p;
    cin >> m >> n >> p;
    if (m + n + p == 0) break;

    // bitsetを生成する
    // 「m人分」ということはできないので、mの最大値100+1で固定する
    bitset<101> infected(0);
    // p番目の人を感染状態(=true)にする
    infected.set(p - 1);

    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;

      // aが感染していた場合
      if (infected.test(a - 1)) {
        // bも感染させる
        infected.set(b - 1);
      }
      // bが感染していた場合
      if (infected.test(b - 1)) {
        // aも感染させる
        infected.set(a - 1);
      }
    }

    // 感染者の人数を出力する
    cout << infected.count() << endl;
  }
}
