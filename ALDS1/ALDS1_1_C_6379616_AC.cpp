/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_1_C/judge/6379616/C++17
 * Submitted at: 2022-03-07 10:41:22
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

bool isPrime(int x) {
  if (x == 1) return false;
  for (int i = 2; i * i <= x; ++i) {
    if (x % i == 0) return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  int ans = 0;
  rep(i, n) {
    int x;
    cin >> x;
    if (isPrime(x)) ans++;
  }
  cout << ans << endl;
  return 0;
}
