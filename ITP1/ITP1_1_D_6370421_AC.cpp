/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_1_D/judge/6370421/C++17
 * Submitted at: 2022-03-03 10:56:38
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_1_D
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int s;
  cin >> s;
  int h = s / 3600;
  int m = (s % 3600) / 60;
  s %= 60;
  printf("%d:%d:%d\n", h, m, s);
  return 0;
}
