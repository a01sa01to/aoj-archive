/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_4_B/judge/6312077/C++
 * Submitted at: 2022-02-11 15:56:27
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_4_B
 * Result: AC
 * Execution Time: 0.06 s
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
  int n;
  cin >> n;
  set<int> s;
  rep(i, n) {
    int x;
    cin >> x;
    s.insert(x);
  }
  int q;
  cin >> q;
  int ans = 0;
  rep(i, q) {
    int x;
    cin >> x;
    if (s.count(x)) ++ans;
  }
  cout << ans << endl;
  return 0;
}
