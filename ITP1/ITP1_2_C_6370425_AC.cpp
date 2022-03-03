/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_2_C/judge/6370425/C++17
 * Submitted at: 2022-03-03 10:58:08
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_2_C
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int v[3];
  cin >> v[0] >> v[1] >> v[2];
  sort(v, v + 3);
  printf("%d %d %d\n", v[0], v[1], v[2]);
  return 0;
}
