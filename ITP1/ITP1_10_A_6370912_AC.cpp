/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_10_A/judge/6370912/C++17
 * Submitted at: 2022-03-03 15:27:49
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_10_A
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  cout << fixed << setprecision(10) << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << endl;
  return 0;
}
