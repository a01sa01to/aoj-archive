/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_9_A/judge/6370890/C++17
 * Submitted at: 2022-03-03 15:15:36
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_9_A
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string w, t;
  int ans = 0;
  cin >> w;
  transform(w.begin(), w.end(), w.begin(), ::tolower);
  while (true) {
    cin >> t;
    if (t == "END_OF_TEXT") break;
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    if (t == w) ++ans;
  }
  cout << ans << endl;
}
