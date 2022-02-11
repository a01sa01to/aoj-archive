/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_5_A/judge/6312152/C++17
 * Submitted at: 2022-02-11 16:17:45
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_5_A
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  while (true) {
    int h, w;
    cin >> h >> w;
    if (h == 0 && w == 0) break;
    rep(i, h) {
      rep(j, w) cout << "#";
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
