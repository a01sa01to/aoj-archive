/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_1_B/judge/6311952/C++
 * Submitted at: 2022-02-11 15:15:29
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_1_B
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
  int x;
  cin >> x;
  cout << x * x * x << endl;
  return 0;
}
