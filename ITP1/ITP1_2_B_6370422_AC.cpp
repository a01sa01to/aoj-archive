/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_2_B/judge/6370422/C++17
 * Submitted at: 2022-03-03 10:57:14
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_2_B
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a < b && b < c) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}
