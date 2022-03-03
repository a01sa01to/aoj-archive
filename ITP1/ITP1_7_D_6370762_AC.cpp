/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_7_D/judge/6370762/C++17
 * Submitted at: 2022-03-03 14:15:28
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_7_D
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
  ll n, m, l;
  cin >> n >> m >> l;
  vector A(n, vector<ll>(m)), B(m, vector<ll>(l)), ans(n, vector<ll>(l, 0));
  rep(i, n) rep(j, m) cin >> A[i][j];
  rep(i, m) rep(j, l) cin >> B[i][j];

  rep(i, n) rep(j, m) rep(k, l) {
    ans[i][k] += A[i][j] * B[j][k];
  }
  rep(i, n) rep(j, l) cout << ans[i][j] << (j == l - 1 ? "\n" : " ");
  return 0;
}
