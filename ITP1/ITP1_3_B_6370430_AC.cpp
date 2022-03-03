/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_3_B/judge/6370430/C++17
 * Submitted at: 2022-03-03 11:00:56
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_3_B
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int cnt = 0;
  while (true) {
    int x;
    cin >> x;
    if (x == 0) break;
    printf("Case %d: %d\n", ++cnt, x);
  }
  return 0;
}
