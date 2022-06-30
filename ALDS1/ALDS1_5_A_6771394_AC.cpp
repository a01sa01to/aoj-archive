/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_5_A/judge/6771394/C++17
 * Submitted at: 2022-07-01 00:35:34
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_5_A
 * Result: AC
 * Execution Time: 0.06 s
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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  set<int> st;
  rep(bit, 1 << n) {
    int s = 0;
    rep(i, n) {
      if (bit & (1 << i)) s += a[i];
    }
    st.insert(s);
  }
  int q;
  cin >> q;
  while (q--) {
    int m;
    cin >> m;
    puts(st.count(m) ? "yes" : "no");
  }
  return 0;
}
