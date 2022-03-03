/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_4_C/judge/6370443/C++17
 * Submitted at: 2022-03-03 11:05:07
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_4_C
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int a, b;
    char op;
    cin >> a >> op >> b;
    if (op == '?') break;
    if (op == '+') cout << a + b << endl;
    if (op == '-') cout << a - b << endl;
    if (op == '*') cout << a * b << endl;
    if (op == '/') cout << a / b << endl;
  }
}
