/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_11_B/judge/6370998/C++17
 * Submitted at: 2022-03-03 16:15:59
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_11_B
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

bool chk(const vector<int>& v, int& a, int& b) {
  rep(i, 4) {
    if (v[i % 4] == a && v[(i + 1) % 4] == b) return true;
  }
  return false;
}

int main() {
  int dice[6];
  rep(i, 6) cin >> dice[i];
  int q;
  cin >> q;
  while (q--) {
    int a, b;
    cin >> a >> b;
    a = find(dice, dice + 6, a) - dice + 1;
    b = find(dice, dice + 6, b) - dice + 1;

    if (chk({ 2, 3, 5, 4 }, a, b)) {
      cout << dice[0] << endl;
    }
    if (chk({ 1, 4, 6, 3 }, a, b)) {
      cout << dice[1] << endl;
    }
    if (chk({ 1, 2, 6, 5 }, a, b)) {
      cout << dice[2] << endl;
    }
    if (chk({ 1, 5, 6, 2 }, a, b)) {
      cout << dice[3] << endl;
    }
    if (chk({ 1, 3, 6, 4 }, a, b)) {
      cout << dice[4] << endl;
    }
    if (chk({ 2, 4, 5, 3 }, a, b)) {
      cout << dice[5] << endl;
    }
  }
  return 0;
}
