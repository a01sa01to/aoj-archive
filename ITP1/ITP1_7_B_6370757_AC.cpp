/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_7_B/judge/6370757/C++17
 * Submitted at: 2022-03-03 14:09:49
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_7_B
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  while (true) {
    int n, x;
    cin >> n >> x;
    if (n == 0 && x == 0) break;
    int ans = 0;
    for (int a = 1; a <= n; ++a)
      for (int b = a + 1; b <= n; ++b)
        for (int c = b + 1; c <= n; ++c)
          if (a + b + c == x) ++ans;
    cout << ans << endl;
  }
  return 0;
}
