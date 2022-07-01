/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_5_D/judge/6771910/C++17
 * Submitted at: 2022-07-01 10:32:02
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_5_D
 * Result: AC
 * Execution Time: 0.08 s
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

pair<ll, vector<ll>> invNum(vector<ll> a) {
  ll n = a.size();
  if (n <= 1) return { 0, a };
  ll mid = n / 2;
  auto left = invNum(vector<ll>(a.begin(), a.begin() + mid));
  auto right = invNum(vector<ll>(a.begin() + mid, a.end()));
  vector<ll> res;
  ll inv = 0;
  inv += left.first + right.first;
  ll i = 0, j = 0;
  while (i < left.second.size() && j < right.second.size()) {
    if (left.second[i] < right.second[j]) {
      res.push_back(left.second[i]);
      i++;
    }
    else {
      res.push_back(right.second[j]);
      j++;
      inv += left.second.size() - i;
    }
  }
  while (i < left.second.size()) {
    res.push_back(left.second[i]);
    i++;
  }
  while (j < right.second.size()) {
    res.push_back(right.second[j]);
    j++;
  }
  return { inv, res };
}

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  auto res = invNum(a);
  cout << res.first << endl;
  return 0;
}
