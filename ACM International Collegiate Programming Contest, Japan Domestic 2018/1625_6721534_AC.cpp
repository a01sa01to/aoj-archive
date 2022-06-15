/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1625/judge/6721534/C++17
 * Submitted at: 2022-06-15 19:24:07
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1625
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

int main() {
  while (true) {
    int n, m, t, p;
    cin >> n >> m >> t >> p;
    if (n + m + t + p == 0) break;
    vector Grid(m, vector<int>(n, 1));
    while (t--) {
      int d, c;
      cin >> d >> c;
      if (d == 1) {
        for (int i = 0; i < Grid.size(); i++) {
          for (int j = 0; j < c; j++) {
            if (c + j >= Grid[i].size()) {
              Grid[i].push_back(Grid[i][c - j - 1]);
            }
            else {
              Grid[i][c + j] += Grid[i][c - j - 1];
            }
            Grid[i][c - j - 1] = 0;
          }
        }
      }
      if (d == 2) {
        for (int i = 0; i < c; i++) {
          for (int j = 0; j < Grid[0].size(); j++) {
            if (c + i >= Grid.size()) {
              Grid.push_back(vector<int>(Grid[0].size(), 0));
            }
            Grid[c + i][j] += Grid[c - i - 1][j];
            Grid[c - i - 1][j] = 0;
          }
        }
      }

      for (int i = Grid.size() - 1; i >= 0; i--) {
        auto itr = remove_if(Grid[i].begin(), Grid[i].end(), [](int x) {
          return x == 0;
        });
        Grid[i].erase(itr, Grid[i].end());
        if (accumulate(Grid[i].begin(), Grid[i].end(), 0) == 0) Grid.erase(Grid.begin() + i);
      }

      // rep(i, Grid.size()) {
      //   rep(j, Grid[0].size()) {
      //     cout << Grid[i][j];
      //   }
      //   cout << endl;
      // }
      // cout << "-----" << endl;
    }
    while (p--) {
      int x, y;
      cin >> x >> y;
      cout << Grid[y][x] << endl;
    }
  }
  return 0;
}
