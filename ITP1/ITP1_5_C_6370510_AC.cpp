/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_5_C/judge/6370510/C++17
 * Submitted at: 2022-03-03 12:03:26
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_5_C
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  while (true) {
    int h, w;
    cin >> h >> w;
    if (h == 0 && w == 0) break;
    rep(i, h) {
      rep(j, w) {
        cout << (i % 2 == j % 2 ? "#" : ".");
      }
      cout << endl;
    }
    cout << endl;
  }
}
