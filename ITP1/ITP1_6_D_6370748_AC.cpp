/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_6_D/judge/6370748/C++17
 * Submitted at: 2022-03-03 14:03:53
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_6_D
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector a(n, vector<int>(m));
  rep(i, n) rep(j, m) cin >> a[i][j];
  vector<int> b(m);
  rep(i, m) cin >> b[i];
  vector<int> ans(n, 0);
  rep(i, n) {
    rep(j, m) ans[i] += a[i][j] * b[j];
  }
  rep(i, n) cout << ans[i] << endl;
  return 0;
}
