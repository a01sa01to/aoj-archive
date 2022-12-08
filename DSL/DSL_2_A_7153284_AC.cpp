/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/DSL_2_A/judge/7153284/C++17
 * Submitted at: 2022-12-08 19:33:33
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_A
 * Result: AC
 * Execution Time: 0.09 s
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
  constexpr ll init = (1LL << 31) - 1;
  vector<ll> a(n, init);
  int len = round(sqrt(n));
  vector<ll> bucket((n - 1) / len + 2, init);
  while (q--) {
    int t, x, y;
    cin >> t >> x >> y;
    if (t == 0) {
      int idx = x / len;
      int l = idx * len, r = (idx + 1) * len;
      a[x] = y;
      bucket[idx] = init;
      for (int i = l; i < min(n, r); ++i) {
        bucket[idx] = min(bucket[idx], a[i]);
      }
    }
    else {
      y++;
      ll ans = init;
      rep(i, bucket.size()) {
        int l = i * len, r = (i + 1) * len;
        if (x <= l && r <= y) {
          ans = min(ans, bucket[i]);
        }
        else if (x >= r || y <= l) {}
        else {
          for (int i = max(x, l); i < min(y, r); ++i) {
            ans = min(ans, a[i]);
          }
        }
      }
      cout << ans << endl;
    }
    // Debug(a);
    // Debug(bucket);
  }
  return 0;
}
