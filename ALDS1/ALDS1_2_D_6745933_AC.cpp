/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_2_D/judge/6745933/C++17
 * Submitted at: 2022-06-23 18:45:14
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_2_D
 * Result: AC
 * Execution Time: 1.02 s
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

int cnt = 0;

void InsertionSort(vector<int>& a, int n, int g) {
  for (int i = g; i < n; i++) {
    Debug(g, i, n);
    int v = a[i];
    int j = i - g;
    while (j >= 0 && a[j] > v) {
      Debug(j + g);
      a[j + g] = a[j];
      j = j - g;
      cnt++;
    }
    a[j + g] = v;
  }
}

void ShellSort(vector<int>& a, int n) {
  vector<int> g(0);
  int now = 1;
  while (now <= n) {
    g.push_back(now);
    now = 3 * now + 1;
  }
  sort(g.rbegin(), g.rend());
  int m = g.size();
  cout << m << endl;
  rep(i, m) cout << g[i] << (i == m - 1 ? "\n" : " ");
  rep(i, m) InsertionSort(a, n, g[i]);
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  ShellSort(a, n);
  cout << cnt << endl;
  for (int x : a) cout << x << endl;
  return 0;
}
