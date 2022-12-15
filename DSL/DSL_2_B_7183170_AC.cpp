/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/DSL_2_B/judge/7183170/C++17
 * Submitted at: 2022-12-15 19:01:56
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B
 * Result: AC
 * Execution Time: 0.07 s
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

class BIT {
  public:
  BIT(int _n) {
    n = _n;
    data.resize(n);
  }
  void add(int i, ll x) {
    i++;
    while (i <= n) {
      data[i - 1] += x;
      i += (i & -i);
    }
  }
  ll sum(int l, int r) {
    return sum(r) - sum(l);
  }

  private:
  int n;
  vector<ll> data;
  ll sum(int i) {
    int s = 0;
    while (i > 0) {
      s += data[i - 1];
      i -= (i & -i);
    }
    return s;
  }
};

int main() {
  int n, q;
  cin >> n >> q;
  BIT b(n);
  while (q--) {
    int t, x, y;
    cin >> t >> x >> y;
    if (t == 0) {
      b.add(x - 1, y);
    }
    else {
      cout << b.sum(x - 1, y) << endl;
    }
  }
  return 0;
}
