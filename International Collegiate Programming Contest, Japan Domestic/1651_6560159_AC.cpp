/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1651/judge/6560159/C++17
 * Submitted at: 2022-05-02 16:04:48
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1651
 * Result: AC
 * Execution Time: 6.91 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  constexpr int MAX = 2500;
  while (true) {
    // 入力
    int n;
    cin >> n;

    // n=0なら終了
    if (n == 0) break;

    // それぞれのポールの風船の数
    vector<int> b(n);
    rep(i, n) cin >> b[i];

    // dp[k][x][y] = k番目まで見たとき、1番目のグループをx個、2番目のグループをy個にできるか？
    vector dp(n + 1, vector(MAX, vector<bool>(MAX, false)));
    // 最初は明らかにすべて0個
    dp[0][0][0] = true;

    // 計算する
    rep(k, n) rep(x, MAX) rep(y, MAX) {
      // もしk番目を追加するか決める前に、1番目のグループをx個、2番目のグループをy個にできる場合
      if (dp[k][x][y]) {
        // k番目を追加して、1番目のグループを x+b[i] 個にできる
        if (x + b[k] < MAX) dp[k + 1][x + b[k]][y] = true;

        // k番目を追加して、2番目のグループを y+b[i] 個にできる
        if (x + b[k] < MAX) dp[k + 1][x][y + b[k]] = true;

        // k番目を追加して、3番目のグループを (あまり) 個にできる
        if (x + b[k] < MAX) dp[k + 1][x][y] = true;
      }
    }

    // すべての風船の合計個数
    int sum = accumulate(b.begin(), b.end(), 0);
    // こうやっても同じ
    // int sum = 0;
    // rep(i, n) sum += b[i];

    // できる組み合わせの最小値を最大にしたい
    int ans = 0;
    rep(x, MAX) rep(y, MAX) {
      if (dp[n][x][y]) {
        // 可能性のある組み合わせであった場合、最小値は x,y,sum-x-yのどれか
        int minimum = min({ x, y, sum - x - y });

        // もし現時点での答えより大きければ、更新する
        ans = max(ans, minimum);
      }
    }
    cout << ans << endl;
  }
}
