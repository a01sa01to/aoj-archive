/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1610/judge/6763743/C++17
 * Submitted at: 2022-06-29 19:49:47
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1610
 * Result: AC
 * Execution Time: 1.64 s
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int m, n;
    cin >> m >> n;
    if (m + n == 0) break;

    const int INF = 7'500'000;
    vector<bool> boring(INF, true);
    for (int i = m; i < INF; i++) {
      if (boring[i] && n > 0) {
        boring[i] = false;
        n--;
        for (int j = 2; j * i < INF; j++) {
          boring[j * i] = false;
        }
      }
    }
    for (int i = m; i < INF; i++) {
      if (boring[i]) {
        cout << i << endl;
        break;
      }
    }
  }
  return 0;
}
