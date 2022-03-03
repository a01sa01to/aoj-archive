/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_8_C/judge/6370877/C++17
 * Submitted at: 2022-03-03 15:11:02
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_8_C
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  vector<int> cnt(26, 0);
  string s;
  while (getline(cin, s)) {
    rep(i, s.size()) {
      s[i] = tolower(s[i]);
      if ('a' <= s[i] && s[i] <= 'z') ++cnt[tolower(s[i]) - 'a'];
    }
  }
  rep(i, 26) {
    printf("%c : %d\n", i + 'a', cnt[i]);
  }
}
