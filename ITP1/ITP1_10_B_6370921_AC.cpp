/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_10_B/judge/6370921/C++17
 * Submitted at: 2022-03-03 15:32:29
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_10_B
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int a, b, _c;
  cin >> a >> b >> _c;
  const double Pi = acos(-1);
  double c = _c * Pi / 180;
  cout << fixed << setprecision(10);
  cout << a * b * sin(c) / 2 << endl;
  cout << a + b + sqrt(a * a + b * b - 2 * a * b * cos(c)) << endl;
  cout << b * sin(c) << endl;
  return 0;
}
