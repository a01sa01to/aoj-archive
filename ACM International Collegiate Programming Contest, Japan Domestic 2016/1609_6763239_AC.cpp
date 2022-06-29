/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1609/judge/6763239/C++17
 * Submitted at: 2022-06-29 17:13:09
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1609
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
    vector<int> cnt(26, 0);
    bool output = false;
    rep(i, n) {
      char c;
      cin >> c;
      if (output) continue;
      cnt[c - 'A']++;

      pair<int, int> maxim1 = { 0, -1 }, maxim2 = { 0, -1 };
      rep(j, 26) {
        if (cnt[j] > maxim1.first) {
          maxim2 = maxim1;
          maxim1 = { cnt[j], j };
        }
        else if (cnt[j] > maxim2.first) {
          maxim2 = { cnt[j], j };
        }
      }
      int rem = n - i - 1;
      if (maxim1.first > maxim2.first + rem) {
        printf("%c %d\n", 'A' + maxim1.second, i + 1);
        output = true;
      }
      else if (rem == 0) {
        cout << "TIE" << endl;
        output = true;
      }
    }
  }
  return 0;
}
