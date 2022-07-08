/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1601/judge/6796435/C++17
 * Submitted at: 2022-07-08 14:27:03
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1601
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
    vector<int> sum(n + 1, 0);
    rep(i, n) {
      string s;
      cin >> s;
      sum[i + 1] = sum[i] + s.size();
    }
    rep(i, n) {
      auto itr1 = lower_bound(sum.begin(), sum.end(), sum[i] + 5);
      auto itr2 = upper_bound(sum.begin(), sum.end(), sum[i] + 5);
      if (!distance(itr1, itr2)) continue;

      auto itr3 = lower_bound(sum.begin(), sum.end(), sum[i] + 12);
      auto itr4 = upper_bound(sum.begin(), sum.end(), sum[i] + 12);
      if (!distance(itr3, itr4)) continue;

      auto itr5 = lower_bound(sum.begin(), sum.end(), sum[i] + 17);
      auto itr6 = upper_bound(sum.begin(), sum.end(), sum[i] + 17);
      if (!distance(itr5, itr6)) continue;

      auto itr7 = lower_bound(sum.begin(), sum.end(), sum[i] + 24);
      auto itr8 = upper_bound(sum.begin(), sum.end(), sum[i] + 24);
      if (!distance(itr7, itr8)) continue;

      auto itr9 = lower_bound(sum.begin(), sum.end(), sum[i] + 31);
      auto itr10 = upper_bound(sum.begin(), sum.end(), sum[i] + 31);
      if (!distance(itr9, itr10)) continue;

      cout << i + 1 << endl;
      break;
    }
  }
  return 0;
}
