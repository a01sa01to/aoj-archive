/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_4_B/judge/6370436/C++17
 * Submitted at: 2022-03-03 11:03:43
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_4_B
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  const double Pi = acos(-1);
  double r;
  cin >> r;
  printf("%.10lf %.10lf\n", r * r * Pi, 2 * r * Pi);
  return 0;
}
