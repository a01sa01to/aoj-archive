/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_11_A/judge/6370973/C++17
 * Submitted at: 2022-03-03 15:57:13
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_11_A
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

struct Dice {
  int d[6];
  void shake(string s) {
    for (char c : s) {
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
      }
    }
  }
};

int main() {
  Dice dice;
  rep(i, 6) cin >> dice.d[i];
  string s;
  cin >> s;
  dice.shake(s);
  cout << dice.d[0] << endl;
  return 0;
}
