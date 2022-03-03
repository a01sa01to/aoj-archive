/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_10_D/judge/6370940/C++17
 * Submitted at: 2022-03-03 15:41:35
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_10_D
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<double> x(n), y(n);
  rep(i, n) cin >> x[i];
  rep(i, n) cin >> y[i];

  double manh = 0;
  double euc = 0;
  double minc_3 = 0;
  double cheb = 0;
  rep(i, n) {
    manh += abs(x[i] - y[i]);
    euc += pow(abs(x[i] - y[i]), 2);
    minc_3 += pow(abs(x[i] - y[i]), 3);
    cheb = max(cheb, abs(x[i] - y[i]));
  }
  euc = sqrt(euc);
  minc_3 = pow(minc_3, 1.0 / 3.0);
  cout << fixed << setprecision(10) << manh << endl
       << euc << endl
       << minc_3 << endl
       << cheb << endl;
  return 0;
}
