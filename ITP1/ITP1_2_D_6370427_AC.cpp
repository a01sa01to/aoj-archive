/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_2_D/judge/6370427/C++17
 * Submitted at: 2022-03-03 10:59:22
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_2_D
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, h, x, y, r;
  cin >> w >> h >> x >> y >> r;
  bool chk = true;
  chk &= (x >= r);
  chk &= (y >= r);
  chk &= (x + r <= w);
  chk &= (y + r <= h);
  cout << (chk ? "Yes" : "No") << endl;
  return 0;
}
