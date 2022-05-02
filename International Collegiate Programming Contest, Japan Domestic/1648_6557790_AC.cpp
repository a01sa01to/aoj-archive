/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1648/judge/6557790/C++17
 * Submitted at: 2022-05-02 10:34:13
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1648
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  while (true) {
    // 入力を受け取る
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // もしすべての要素が0であれば終了
    if (a + b + c + d == 0) break;

    // すべての数の最大公約数を求める
    int g = a;
    g = gcd(g, b);
    g = gcd(g, c);
    g = gcd(g, d);

    // 答えはすべての数の最大公約数 g
    cout << g << endl;
  }
  return 0;
}
