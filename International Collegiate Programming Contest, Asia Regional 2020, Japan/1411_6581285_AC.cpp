/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1411/judge/6581285/C++17
 * Submitted at: 2022-05-08 16:27:37
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1411
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector yz(n, vector<bool>(n)), zx(n, vector<bool>(n)), xy(n, vector<bool>(n));
  rep(i, n) {
    string s;
    cin >> s;
    rep(j, n) yz[j][n - i - 1] = (s[j] == '1');
  }
  rep(i, n) {
    string s;
    cin >> s;
    rep(j, n) zx[j][n - i - 1] = (s[j] == '1');
  }
  rep(i, n) {
    string s;
    cin >> s;
    rep(j, n) xy[j][n - i - 1] = (s[j] == '1');
  }

  vector ans(n, vector(n, vector<bool>(n, true)));
  Debug(ans);
  rep(i, n) rep(j, n) if (!yz[i][j]) rep(k, n) ans[k][i][j] = false;
  Debug(ans);
  rep(i, n) rep(j, n) if (!zx[i][j]) rep(k, n) ans[j][k][i] = false;
  Debug(ans);
  rep(i, n) rep(j, n) if (!xy[i][j]) rep(k, n) ans[i][j][k] = false;
  Debug(ans);
  rep(i, n) rep(j, n) {
    if (yz[i][j]) {
      bool chk = false;
      rep(k, n) if (ans[k][i][j]) chk = true;
      if (!chk) {
        puts("No");
        return 0;
      }
    }
  }
  rep(i, n) rep(j, n) {
    if (zx[i][j]) {
      bool chk = false;
      rep(k, n) if (ans[j][k][i]) chk = true;
      if (!chk) {
        puts("No");
        return 0;
      }
    }
  }
  rep(i, n) rep(j, n) {
    if (xy[i][j]) {
      bool chk = false;
      rep(k, n) if (ans[i][j][k]) chk = true;
      if (!chk) {
        puts("No");
        return 0;
      }
    }
  }
  puts("Yes");
  return 0;
}
