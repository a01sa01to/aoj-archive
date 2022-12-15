/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/3300/judge/7181026/C++17
 * Submitted at: 2022-12-15 14:23:24
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/3300
 * Result: AC
 * Execution Time: 0.08 s
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  multiset<pair<int, int>> v;
  rep(i, n) {
    int s, t;
    cin >> s >> t;
    v.insert({ s, t });
  }
  int k;
  cin >> k;
  vector<int> h(k);
  rep(i, k) cin >> h[i];
  int ans = 0;
  for (auto [l, r] : v) {
    if (distance(lower_bound(h.begin(), h.end(), l), upper_bound(h.begin(), h.end(), r)) >= 1) ++ans;
  }
  cout << ans << endl;
  return 0;
}
