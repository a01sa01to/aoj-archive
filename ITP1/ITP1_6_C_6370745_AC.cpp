/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_6_C/judge/6370745/C++17
 * Submitted at: 2022-03-03 14:00:53
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_6_C
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int a[4][3][10];
  rep(i, 4) rep(j, 3) rep(k, 10) a[i][j][k] = 0;

  int n;
  cin >> n;
  rep(_, n) {
    int b, f, r, v;
    cin >> b >> f >> r >> v;
    --b, --f, --r;
    a[b][f][r] += v;
  }
  rep(i, 4) {
    rep(j, 3) {
      rep(k, 10) {
        cout << " " << a[i][j][k];
      }
      cout << endl;
    }
    if (i < 3) cout << "####################" << endl;
  }
  return 0;
}
