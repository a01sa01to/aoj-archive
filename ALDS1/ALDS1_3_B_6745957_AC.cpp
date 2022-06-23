/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_3_B/judge/6745957/C++17
 * Submitted at: 2022-06-23 18:52:25
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_3_B
 * Result: AC
 * Execution Time: 0.05 s
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

typedef pair<string, int> P;

int main() {
  int n, q;
  cin >> n >> q;
  queue<P> que;
  rep(i, n) {
    string s;
    int t;
    cin >> s >> t;
    que.push({ s, t });
  }
  int now = 0;
  while (!que.empty()) {
    auto [s, t] = que.front();
    que.pop();
    if (t <= q) {
      now += t;
      cout << s << " " << now << endl;
    }
    else {
      t -= q;
      now += q;
      que.push({ s, t });
    }
  }
  return 0;
}
