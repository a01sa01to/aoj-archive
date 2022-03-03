/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_9_B/judge/6370893/C++17
 * Submitted at: 2022-03-03 15:17:33
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_9_B
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
    if (s == "-") break;
    int m;
    cin >> m;
    rep(_, m) {
      int h;
      cin >> h;
      s = s.substr(h) + s.substr(0, h);
    }
    cout << s << endl;
  }
  return 0;
}
