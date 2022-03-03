/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_8_D/judge/6370885/C++17
 * Submitted at: 2022-03-03 15:13:52
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_8_D
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s, p;
  cin >> s >> p;
  s = s + s;
  auto itr = s.find(p);
  if (itr == string::npos) cout << "No" << endl;
  else
    cout << "Yes" << endl;
}
