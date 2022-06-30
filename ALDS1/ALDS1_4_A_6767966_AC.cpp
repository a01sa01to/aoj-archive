/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_4_A/judge/6767966/C++17
 * Submitted at: 2022-06-30 15:04:04
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_4_A
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
  int n;
  cin >> n;
  vector<int> s(n);
  rep(i, n) cin >> s[i];
  int q;
  cin >> q;
  vector<int> t(q);
  rep(i, q) cin >> t[i];

  int ans = 0;
  rep(i, q) rep(j, n) {
    if (t[i] == s[j]) {
      ans++;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
