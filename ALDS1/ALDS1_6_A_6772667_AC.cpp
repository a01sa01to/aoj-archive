/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_6_A/judge/6772667/C++17
 * Submitted at: 2022-07-01 15:01:18
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_6_A
 * Result: AC
 * Execution Time: 0.34 s
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
  vector<int> cnt(10001, 0);
  rep(i, n) {
    int a;
    cin >> a;
    cnt[a]++;
  }
  int t = 0;
  for (int i = 0; i <= 10000; i++) {
    rep(_, cnt[i]) {
      cout << i << (++t == n ? "\n" : " ");
    }
  }
  return 0;
}
