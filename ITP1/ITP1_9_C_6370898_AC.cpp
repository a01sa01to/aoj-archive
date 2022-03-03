/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_9_C/judge/6370898/C++17
 * Submitted at: 2022-03-03 15:19:42
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_9_C
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  int a = 0, b = 0;
  rep(_, n) {
    string s, t;
    cin >> s >> t;
    if (s < t) b += 3;
    else if (s > t)
      a += 3;
    else
      ++a, ++b;
  }
  printf("%d %d\n", a, b);
  return 0;
}
