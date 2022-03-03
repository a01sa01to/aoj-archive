/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_5_D/judge/6370601/C++17
 * Submitted at: 2022-03-03 12:45:45
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_5_D
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int n;
int i = 1;
int x = i;

void checknum();
void include3();
void endchecknum();

void checknum() {
  x = i;
  if (x % 3 == 0) {
    cout << " " << i;
    endchecknum();
    return;
  }
  include3();
  return;
}

void include3() {
  if (x % 10 == 3) {
    cout << " " << i;
    endchecknum();
    return;
  }
  x /= 10;
  if (x) include3();
  else
    endchecknum();
}

void endchecknum() {
  if (++i <= n) checknum();
}

int main() {
  cin >> n;
  checknum();
  cout << endl;
}
