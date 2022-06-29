/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1608/judge/6763595/Python3
 * Submitted at: 2022-06-29 18:59:36
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1608
 * Result: AC
 * Execution Time: 1.39 s
 */

while True:
    # 入力
    n = int(input())
    if n == 0:
        break
    a = list(map(int, input().split()))

    # 最小値を求める
    # 仮の答えは、大きいものにしておく
    ans = 10**9
    for i in range(n):
        for j in range(i+1, n):
            ans = min(ans, abs(a[i] - a[j]))

    # 出力
    print(ans)

