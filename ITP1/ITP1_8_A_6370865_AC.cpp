/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_8_A/judge/6370865/C++17
 * Submitted at: 2022-03-03 15:03:55
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_8_A
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  getline(cin, s);
  rep(i, s.size()) {
    if (islower(s[i])) {
      s[i] = toupper(s[i]);
    }
    else {
      s[i] = tolower(s[i]);
    }
  }
  cout << s << endl;
  return 0;
}
