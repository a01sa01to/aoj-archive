/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1611/judge/6771391/C++17
 * Submitted at: 2022-07-01 00:31:53
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1611
 * Result: AC
 * Execution Time: 4.39 s
 */

#include <bits/stdc++.h>
using namespace std;

// i番目以降の最大値を求める（メモ化再帰）
int chk(const vector<vector<bool>>& dp, const int i, const int n, vector<int>& memo) {
  // これはありえないので、return
  if (i >= n) return 0;
  // すでに計算済みならば、それを返す
  if (memo[i]) return memo[i];

  // 返すべき値
  int ret = 0;
  // iからjを飛ばすとき
  for (int j = i + 1; j < n; j++) {
    if (dp[i][j]) {
      // それ以降の最大値 + iからjを飛ばした個数
      ret = max(ret, j - i + 1 + chk(dp, j + 1, n, memo));
    }
  }
  // 上の場合に引っかからなかった場合は、それ以降飛ばせるところを見る
  ret = max(ret, chk(dp, i + 1, n, memo));
  // メモして返す
  return memo[i] = ret;
}

int main() {
  while (true) {
    // 入力
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    vector<int> w(n);
    for (int i = 0; i < n; i++) {
      cin >> w[i];
    }

    // dpで求める
    // dp[i][j] = iからjまでをすべて飛ばせるか
    vector dp(n, vector<bool>(n, false));
    for (int i = 0; i < n - 1; i++) {
      // 隣同士を見て、飛ばせるようであればtrue
      if (abs(w[i] - w[i + 1]) <= 1) {
        dp[i][i + 1] = true;
      }
    }
    // 更新されなくなるまでループ
    while (true) {
      // 更新したか
      bool updated = false;
      for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
          // もし、iからjまでを飛ばせて、
          // i-1とj+1を飛ばせる
          // そして dp[i-1][j+1]が更新されていない場合
          if (i > 0 && j + 1 < n && dp[i][j] && abs(w[i - 1] - w[j + 1]) <= 1 && !dp[i - 1][j + 1]) {
            dp[i - 1][j + 1] = true;
            updated = true;
          }
          for (int k = i + 1; k < j - 1; k++) {
            // もし、iからkまで、k+1からjまでの両方を飛ばせるなら、iからjまでを飛ばせるとみなす
            if (dp[i][k] && dp[k + 1][j] && !dp[i][j]) {
              dp[i][j] = true;
              updated = true;
            }
          }
        }
      }
      // 更新されなければ終了
      if (!updated) break;
    }
    // メモ化用
    vector<int> memo(n, 0);
    // 0番目から飛ばせる最大値 = 答え
    cout << chk(dp, 0, n, memo) << endl;
  }
  return 0;
}
