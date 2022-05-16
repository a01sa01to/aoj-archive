/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1640/judge/6611501/C++17
 * Submitted at: 2022-05-16 20:08:04
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1640
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int n;
    cin >> n;
    if (n == 0) break;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int ans = 0;
    for (int i = 0; i < n - 3; i++) {
      if (a[i] == 2 && a[i + 1] == 0 && a[i + 2] == 2 && a[i + 3] == 0) {
        ans++;
      }
    }
    cout << ans << endl;
  }
}
