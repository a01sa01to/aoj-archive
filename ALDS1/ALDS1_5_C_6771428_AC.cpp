/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_5_C/judge/6771428/C++17
 * Submitted at: 2022-07-01 01:07:02
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_5_C
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

typedef complex<double> P;
vector<P> ans;

void koch(const P p1, const P p2, const int dep) {
  if (dep <= 0) return;
  P s = p1 + (p2 - p1) / 3.0;
  P t = p2 - (p2 - p1) / 3.0;
  P u = s + (t - s) * P(0.5, sqrt(3.0) / 2.0);
  koch(p1, s, dep - 1);
  ans.push_back(s);
  koch(s, u, dep - 1);
  ans.push_back(u);
  koch(u, t, dep - 1);
  ans.push_back(t);
  koch(t, p2, dep - 1);
}

int main() {
  int n;
  cin >> n;
  P p1(0, 0), p2(100, 0);
  ans.push_back(p1);
  koch(p1, p2, n);
  ans.push_back(p2);
  cout << fixed << setprecision(10);
  rep(i, ans.size()) {
    cout << ans[i].real() << " " << ans[i].imag() << endl;
  }
  return 0;
}
