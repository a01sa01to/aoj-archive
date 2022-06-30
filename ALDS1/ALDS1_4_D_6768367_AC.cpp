/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_4_D/judge/6768367/C++17
 * Submitted at: 2022-06-30 15:29:38
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_4_D
 * Result: AC
 * Execution Time: 0.01 s
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
  int n, k;
  cin >> n >> k;
  vector<int> w(n);
  rep(i, n) cin >> w[i];

  int ok = accumulate(w.begin(), w.end(), 0);
  int ng = *max_element(w.begin(), w.end()) - 1;
  while (ok - ng > 1) {
    int mid = (ok + ng) / 2;
    int used = 1, now = 0;
    rep(i, n) {
      if (now + w[i] > mid) {
        used++;
        now = w[i];
      }
      else {
        now += w[i];
      }
    }
    (used <= k ? ok : ng) = mid;
  }
  cout << ok << endl;
  return 0;
}
