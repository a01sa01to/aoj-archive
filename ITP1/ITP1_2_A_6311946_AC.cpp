/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_2_A/judge/6311946/C++
 * Submitted at: 2022-02-11 15:14:05
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_2_A
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
  int a, b;
  cin >> a >> b;
  if (a < b) puts("a < b");
  else if (a > b)
    puts("a > b");
  else
    puts("a == b");
  return 0;
}
