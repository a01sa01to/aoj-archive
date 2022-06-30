/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_4_C/judge/6768264/C++17
 * Submitted at: 2022-06-30 15:16:02
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_4_C
 * Result: AC
 * Execution Time: 0.9 s
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
  set<string> s;
  while (n--) {
    string cmd, str;
    cin >> cmd >> str;
    if (cmd == "insert") s.insert(str);
    else puts(s.count(str) ? "yes" : "no");
  }
  return 0;
}
