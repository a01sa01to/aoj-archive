/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_1_A/judge/6379607/C++17
 * Submitted at: 2022-03-07 10:36:25
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_A
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

void print(const vector<int>& a) {
  rep(i, a.size()) cout << a[i] << (i == a.size() - 1 ? "\n" : " ");
}

void insertionSort(vector<int>& a, int n) {
  rep(i, n - 1) {
    int v = a[i + 1];
    int j = i;
    while (j >= 0 && a[j] > v) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = v;
    print(a);
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  print(a);
  insertionSort(a, n);
  return 0;
}
