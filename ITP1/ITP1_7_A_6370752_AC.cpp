/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_7_A/judge/6370752/C++17
 * Submitted at: 2022-03-03 14:07:03
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_7_A
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  while (true) {
    int m, f, r;
    cin >> m >> f >> r;
    if (m == -1 && f == -1 && r == -1) break;
    if (m == -1 || f == -1) cout << "F";
    else if (m + f >= 80)
      cout << "A";
    else if (m + f >= 65)
      cout << "B";
    else if (m + f >= 50)
      cout << "C";
    else if (m + f >= 30) {
      if (r >= 50) cout << "C";
      else
        cout << "D";
    }
    else
      cout << "F";

    cout << endl;
  }
  return 0;
}
