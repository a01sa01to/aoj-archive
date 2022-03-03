/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ITP1_6_B/judge/6370732/C++17
 * Submitted at: 2022-03-03 13:55:15
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_6_B
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

const string C = "SHCD";
map<char, int> mp;

struct Card {
  char icon;
  int num;
  bool operator<(const Card& c) const {
    if (mp[icon] != mp[c.icon]) return mp[icon] < mp[c.icon];
    return num < c.num;
  }
};

int main() {
  rep(i, 4) mp[C[i]] = i;
  set<Card> all;
  rep(i, 4) rep(j, 13) all.insert({ C[i], j + 1 });
  int n;
  cin >> n;
  rep(_, n) {
    char c;
    int i;
    cin >> c >> i;
    all.erase({ c, i });
  }
  for (auto c : all) cout << c.icon << " " << c.num << endl;
}
