/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_3_A/judge/6312150/C++17
 * Submitted at: 2022-02-11 16:15:28
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_3_A
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  getline(cin, s);

  int n = s.size();
  queue<string> q;
  {
    string tmp = "";
    rep(i, n) {
      if (s[i] == ' ') {
        q.push(tmp);
        tmp = "";
      }
      else
        tmp.push_back(s[i]);
    }
    q.push(tmp);
  }
  stack<double> st;
  while (!q.empty()) {
    string tmp = q.front();
    q.pop();
    if (tmp == "+" || tmp == "-" || tmp == "*") {
      double b = st.top();
      st.pop();
      double a = st.top();
      st.pop();
      if (tmp == "+") st.push(a + b);
      else if (tmp == "-")
        st.push(a - b);
      else if (tmp == "*")
        st.push(a * b);
    }
    else
      st.push(stoi(tmp));
  }
  cout << st.top() << endl;
  return 0;
}
