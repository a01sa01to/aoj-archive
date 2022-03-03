/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_7_C/judge/6370759/C++17
 * Submitted at: 2022-03-03 14:13:03
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_7_C
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int r, c;
  cin >> r >> c;
  vector a(r + 1, vector<int>(c + 1, 0));
  rep(i, r) rep(j, c) cin >> a[i][j];
  rep(i, r) rep(j, c) {
    a[r][j] += a[i][j];
    a[i][c] += a[i][j];
  }
  rep(i, r) a[r][c] += a[i][c];
  rep(i, r + 1) rep(j, c + 1) cout << a[i][j] << (j == c ? "\n" : " ");
  return 0;
}
