/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1600/judge/6796842/C++17
 * Submitted at: 2022-07-08 15:35:16
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1600
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
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  while (true) {
    int m, n_min, n_max;
    cin >> m >> n_min >> n_max;
    if (m == 0) break;
    vector<int> p(m);
    rep(i, m) cin >> p[i];
    pair<int, int> ans(-1e9, -1e9);
    for (int i = n_max; i >= n_min; i--) {
      int t = p[i - 1] - p[i];
      Debug(i, t, ans);
      if (t > ans.first) {
        ans = { t, i };
      }
    }
    cout << ans.second << endl;
  }
  return 0;
}
