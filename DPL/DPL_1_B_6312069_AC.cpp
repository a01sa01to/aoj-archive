/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/DPL_1_B/judge/6312069/C++
 * Submitted at: 2022-02-11 15:54:07
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_B
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  cout << fixed << setprecision(15);
  ll n, w;
  cin >> n >> w;

  // dp[i][j] = i以下番目のものを重さj以下にするようにしたときの、価値の最大値
  vector<vector<int> > dp(n, vector<int>(w + 1, 0));

  rep(i, n) {
    int we, v;
    cin >> v >> we;
    rep(j, w + 1) {
      if (i == 0 && j >= we) {
        dp[i][j] = v;
      }
      else if (j >= we) {
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - we] + v);
      }
      else if (i != 0) {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  cout << dp[n - 1][w] << endl;
  return 0;
}
