/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/DPL_1_A/judge/6371168/C++17
 * Submitted at: 2022-03-03 17:29:13
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_A
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> c(m);
  rep(i, m) cin >> c[i];
  sort(c.rbegin(), c.rend());

  // dp[i] = i円になるようにする最小値
  vector<int> dp(n + 1, 1e9);
  dp[0] = 0;

  rep(i, m) {
    vector<int> tmp(n + 1, 1e9);
    rep(j, n + 1) {
      tmp[j] = min(tmp[j], dp[j]);
      if (j + c[i] <= n) tmp[j + c[i]] = min(tmp[j + c[i]], tmp[j] + 1);
    }
    dp = tmp;
  }
  cout << dp[n] << endl;
  return 0;
}
