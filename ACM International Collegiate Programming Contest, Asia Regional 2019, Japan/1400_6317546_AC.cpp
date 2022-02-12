/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1400/judge/6317546/C++17
 * Submitted at: 2022-02-12 22:46:59
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1400
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

vector<int> tribase(ll x) {
  vector<int> ret;
  while (x > 0) {
    ret.push_back(x % 3);
    x /= 3;
  }
  return ret;
}

int main() {
  ll t;
  cin >> t;
  if (t == 0) {
    cout << 0 << endl;
    return 0;
  }
  vector<int> x = tribase(t);
  rep(i, x.size() - 1) {
    if (i > 0 && x[i] < 2) {
      x[i] += 3;
      --x[i + 1];
    }
    else if (i == 0 && x[0] == 0) {
      x[0] += 3;
      --x[1];
    }
  }
  Debug(x);
  cout << accumulate(x.begin(), x.end(), 0) << endl;
  return 0;
}
