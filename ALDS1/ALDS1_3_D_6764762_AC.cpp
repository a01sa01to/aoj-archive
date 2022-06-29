/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_3_D/judge/6764762/C++17
 * Submitted at: 2022-06-30 01:19:27
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_3_D
 * Result: AC
 * Execution Time: 0.08 s
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
  string s;
  cin >> s;
  const int n = s.size();
  vector<int> sum(n + 1, 0);
  rep(i, n) {
    sum[i + 1] = sum[i];
    if (s[i] == '/') sum[i + 1]++;
    if (s[i] == '\\') sum[i + 1]--;
  }
  int minim = *min_element(sum.begin(), sum.end());
  rep(i, n + 1) sum[i] -= minim;
  Debug(sum);
  vector<int> ans;
  for (int i = 0; i < n; i++) {
    int idx = -1;
    for (int j = i + 1; j <= n; j++) {
      if (sum[j] > sum[i]) break;
      if (sum[j] == sum[i]) {
        idx = j;
        break;
      }
    }
    if (idx != -1) {
      int t = 0;
      for (int j = i + 1; j < idx; j++) t += sum[i] - sum[j];
      Debug(i, idx, t);
      if (t != 0) ans.push_back(t);
      i = idx - 1;
    }
  }
  cout << accumulate(ans.begin(), ans.end(), 0) << endl;
  cout << ans.size();
  for (auto x : ans) cout << " " << x;
  cout << endl;
  return 0;
}
