/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_11_D/judge/6371105/C++17
 * Submitted at: 2022-03-03 17:12:01
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_11_D
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

struct Dice {
  int d[6];
  bool shake(string s, const int* b) {
    for (char c : s) {
      bool chk = true;
      rep(i, 6) {
        if (d[i] != b[i]) {
          chk = false;
          break;
        }
      }
      if (chk) return true;
      switch (c) {
        case 'N':
          swap(d[0], d[1]);
          swap(d[1], d[5]);
          swap(d[5], d[4]);
          break;
        case 'S':
          swap(d[0], d[4]);
          swap(d[4], d[5]);
          swap(d[5], d[1]);
          break;
        case 'E':
          swap(d[0], d[3]);
          swap(d[3], d[5]);
          swap(d[5], d[2]);
          break;
        case 'W':
          swap(d[0], d[2]);
          swap(d[2], d[5]);
          swap(d[5], d[3]);
          break;
        case 'R':
          swap(d[1], d[2]);
          swap(d[2], d[4]);
          swap(d[4], d[3]);
          break;
        case 'L':
          swap(d[1], d[3]);
          swap(d[3], d[4]);
          swap(d[4], d[2]);
          break;
      }
    }
    return false;
  }
};

int main() {
  int n;
  cin >> n;
  vector<Dice> dices(n);

  rep(i, n) rep(j, 6) cin >> dices[i].d[j];
  rep(i, n) for (int j = i + 1; j < n; ++j) {
    if (dices[i].shake("RRRRERRRRNRRRRERRRRNRRRRERRRRN", dices[j].d)) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
