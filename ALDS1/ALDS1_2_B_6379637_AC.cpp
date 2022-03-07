/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_2_B/judge/6379637/C++17
 * Submitted at: 2022-03-07 10:55:13
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_2_B
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

int cnt = 0;

void selectionSort(vector<int>& a, int n) {
  rep(i, n) {
    int minj = i;
    for (int j = i; j < n; ++j) {
      if (a[j] < a[minj]) minj = j;
    }
    if (i != minj) {
      swap(a[i], a[minj]);
      ++cnt;
    }
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  selectionSort(a, n);
  rep(i, n) cout << a[i] << (i == n - 1 ? "\n" : " ");
  cout << cnt << endl;
  return 0;
}
