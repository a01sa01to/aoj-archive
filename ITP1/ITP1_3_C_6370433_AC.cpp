/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_3_C/judge/6370433/C++17
 * Submitted at: 2022-03-03 11:01:43
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_3_C
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  while (true) {
    int x, y;
    cin >> x >> y;
    if (x == 0 && y == 0) break;
    if (x > y) swap(x, y);
    printf("%d %d\n", x, y);
  }
  return 0;
}
