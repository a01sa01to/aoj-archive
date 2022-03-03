/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_4_D/judge/6370448/C++17
 * Submitted at: 2022-03-03 11:07:04
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_4_D
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  printf("%lld %lld %lld\n", *min_element(a.begin(), a.end()), *max_element(a.begin(), a.end()), accumulate(a.begin(), a.end(), 0LL));
}
