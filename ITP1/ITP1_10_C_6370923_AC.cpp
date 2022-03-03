/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_10_C/judge/6370923/C++17
 * Submitted at: 2022-03-03 15:34:33
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_10_C
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  while (true) {
    int n;
    cin >> n;
    if (n == 0) break;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    double avg = accumulate(a.begin(), a.end(), 0.0) / n;
    double var = 0;
    rep(i, n) var += pow(a[i] - avg, 2);
    var /= n;
    cout << fixed << setprecision(10) << sqrt(var) << endl;
  }
  return 0;
}
