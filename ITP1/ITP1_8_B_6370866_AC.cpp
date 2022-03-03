/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_8_B/judge/6370866/C++17
 * Submitted at: 2022-03-03 15:05:08
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_8_B
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  while (true) {
    string s;
    cin >> s;
    if (s == "0") break;
    int ans = 0;
    rep(i, s.size()) {
      ans += s[i] - '0';
    }
    cout << ans << endl;
  }
  return 0;
}
