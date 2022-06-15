/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1624/judge/6721438/Python3
 * Submitted at: 2022-06-15 18:34:53
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1624
 * Result: AC
 * Execution Time: 0.05 s
 */

while True:
    # 入力
    n = int(input())
    if n == 0:
        break
    a = list(map(int, input().split()))

    # 平均値を求める
    ave = sum(a) / n

    # 答えを求める
    ans = 0
    for i in range(n):
        if(a[i] <= ave):
            ans += 1

    # 出力
    print(ans)

