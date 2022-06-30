/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_5_B/judge/6771408/C++17
 * Submitted at: 2022-07-01 00:47:44
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_5_B
 * Result: AC
 * Execution Time: 0.19 s
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

void merge(vector<int>& a, int l, int mid, int r, int& cnt) {
  int n1 = mid - l, n2 = r - mid;
  vector<int> left(n1 + 1), right(n2 + 1);
  rep(i, n1) left[i] = a[l + i];
  rep(i, n2) right[i] = a[mid + i];
  left[n1] = 1e9, right[n2] = 1e9;
  int i = 0, j = 0;
  for (int k = l; k < r; k++) {
    cnt++;
    if (left[i] <= right[j]) {
      a[k] = left[i];
      i++;
    }
    else {
      a[k] = right[j];
      j++;
    }
  }
}

void MergeSort(vector<int>& a, int& cnt, int l, int r) {
  if (l + 1 < r) {
    int mid = (l + r) / 2;
    MergeSort(a, cnt, l, mid);
    MergeSort(a, cnt, mid, r);
    merge(a, l, mid, r, cnt);
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int cnt = 0;
  MergeSort(a, cnt, 0, n);
  rep(i, n) cout << a[i] << (i == n - 1 ? "\n" : " ");
  cout << cnt << endl;
  return 0;
}
