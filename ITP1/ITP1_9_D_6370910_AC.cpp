/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_9_D/judge/6370910/C++17
 * Submitted at: 2022-03-03 15:27:00
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_9_D
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  int n;
  cin >> n;
  while (n--) {
    string op;
    cin >> op;
    if (op == "print") {
      int a, b;
      cin >> a >> b;
      for (int i = a; i <= b; ++i) cout << s[i];
      cout << endl;
    }
    else if (op == "reverse") {
      int a, b;
      cin >> a >> b;
      reverse(s.begin() + a, s.begin() + b + 1);
    }
    else {
      int a, b;
      string p;
      cin >> a >> b >> p;
      rep(i, p.size()) s[a + i] = p[i];
    }
  }
  return 0;
}
