/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1626/judge/6723486/C++17
 * Submitted at: 2022-06-16 12:36:30
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1626
 * Result: AC
 * Execution Time: 0.01 s
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    // 入力
    int b;
    cin >> b;
    if (b == 0) break;

    for (int n = sqrt(2 * b); n > 0; n--) {
      // もし整数ではなくなってしまう場合
      if (2 * b % n != 0) continue;
      if ((2 * b / n - n + 1) % 2 != 0) continue;

      // aを求める（上でチェックしているので、この値は整数であることが保証されている）
      int a = (2 * b / n - n + 1) / 2;

      // 問題文の制約よりa>=1なので、こうなるかをチェックする
      if (a >= 1) {
        cout << a << " " << n << endl;
        break;
      }
    }
  }
  return 0;
}

