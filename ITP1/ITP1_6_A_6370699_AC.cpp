/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_6_A/judge/6370699/C++17
 * Submitted at: 2022-03-03 13:42:02
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_6_A
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  reverse(a.begin(), a.end());
  rep(i, n) cout << a[i] << (i == n - 1 ? "\n" : " ");
  return 0;
}
