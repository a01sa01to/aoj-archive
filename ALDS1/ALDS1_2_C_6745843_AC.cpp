/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_2_C/judge/6745843/C++17
 * Submitted at: 2022-06-23 18:19:31
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_2_C
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
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

typedef pair<string, int> P;

bool operator<(const P& lhs, const P& rhs) {
  return lhs.first[1] < rhs.first[1];
}
bool operator!=(const P& lhs, const P& rhs) {
  return lhs.first[1] != rhs.first[1];
}

vector<P> BubbleSort(vector<P> base) {
  int n = base.size();
  rep(i, n) {
    for (int j = n - 1; j > i; j--) {
      if (base[j] < base[j - 1]) {
        swap(base[j], base[j - 1]);
      }
    }
  }
  return base;
}

vector<P> SelectionSort(vector<P> base) {
  int n = base.size();
  rep(i, n) {
    int minj = i;
    for (int j = i; j < n; j++) {
      if (base[j] < base[minj]) {
        minj = j;
      }
    }
    swap(base[i], base[minj]);
  }
  return base;
}

void output(vector<P> bs) {
  rep(i, bs.size()) cout << bs[i].first << (i == bs.size() - 1 ? "\n" : " ");
  bool ok = true;
  rep(i, bs.size() - 1) {
    ok &= bs[i] != bs[i + 1] || bs[i + 1].second > bs[i].second;
  }
  puts(ok ? "Stable" : "Not stable");
}

int main() {
  int n;
  cin >> n;
  vector<P> cards(n);
  rep(i, n) {
    cin >> cards[i].first;
    cards[i].second = i;
  }
  output(BubbleSort(cards));
  output(SelectionSort(cards));
  return 0;
}
