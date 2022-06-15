/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1624/judge/6721415/C++17
 * Submitted at: 2022-06-15 18:29:13
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1624
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
    int n;
    cin >> n;
    if (n == 0) break;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    double ave = accumulate(a.begin(), a.end(), 0.0) / n;
    int ans = 0;
    rep(i, n) {
      if (a[i] <= ave) ans++;
    }
    cout << ans << endl;
  }
  return 0;
}
