/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_1_D/judge/6379628/C++17
 * Submitted at: 2022-03-07 10:47:53
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_D
 * Result: AC
 * Execution Time: 0.04 s
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
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int minim = a[0], ans = -1e9;
  rep(i, n - 1) {
    ans = max(ans, a[i + 1] - minim);
    minim = min(minim, a[i + 1]);
  }
  cout << ans << endl;
  return 0;
}
