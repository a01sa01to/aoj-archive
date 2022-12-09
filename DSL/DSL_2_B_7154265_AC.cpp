/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/DSL_2_B/judge/7154265/C++17
 * Submitted at: 2022-12-09 09:09:44
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B
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
  int n, q;
  cin >> n >> q;
  vector<ll> a(n, 0);
  int len = round(sqrt(n));
  vector<ll> bucket((n - 1) / len + 1, 0);
  while (q--) {
    int t, x, y;
    cin >> t >> x >> y;
    --x;
    Debug(t, x, y);
    if (t == 0) {
      int idx = x / len;
      a[x] += y;
      bucket[idx] += y;
    }
    else {
      ll ans = 0;
      rep(i, bucket.size()) {
        int l = i * len, r = (i + 1) * len;
        if (x <= l && r <= y) {
          ans += bucket[i];
        }
        else if (x >= r || y <= l) {}
        else {
          for (int i = max(x, l); i < min(y, r); ++i) {
            ans += a[i];
          }
        }
      }
      cout << ans << endl;
    }
    Debug(a);
    Debug(bucket);
  }
  return 0;
}
