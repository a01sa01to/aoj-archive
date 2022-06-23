/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_3_C/judge/6746044/C++17
 * Submitted at: 2022-06-23 19:13:35
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_3_C
 * Result: AC
 * Execution Time: 0.51 s
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
  deque<int> dq;
  int n;
  cin >> n;
  while (n--) {
    string s;
    cin >> s;
    if (s == "insert") {
      int x;
      cin >> x;
      dq.push_front(x);
    }
    else if (s == "delete") {
      int x;
      cin >> x;
      rep(i, dq.size()) {
        if (dq[i] == x) {
          dq.erase(dq.begin() + i);
          break;
        }
      }
    }
    else if (s == "deleteFirst") {
      dq.pop_front();
    }
    else {
      dq.pop_back();
    }
    Debug(dq);
  }
  rep(i, dq.size()) {
    cout << dq[i] << (i == dq.size() - 1 ? "\n" : " ");
  }
  return 0;
}
