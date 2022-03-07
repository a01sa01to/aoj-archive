/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_1_B/judge/6379609/C++17
 * Submitted at: 2022-03-07 10:37:55
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_B
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

int GCD(int x, int y) {
  if (x > y) swap(x, y);
  if (x == 0) return y;
  return GCD(y % x, x);
}

int main() {
  int x, y;
  cin >> x >> y;
  cout << GCD(x, y) << endl;
  return 0;
}
