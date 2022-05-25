/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1632/judge/6649172/Python3
 * Submitted at: 2022-05-25 12:31:43
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1632
 * Result: AC
 * Execution Time: 0.13 s
 */

while True:
    # 入力
    n,  m = map(int, input().split())
    if n + m == 0:
        break
    Scores = []
    for i in range(m):
        Scores.append(list(map(int, input().split())))

    # それぞれの合計点を求める
    Sums = []
    for i in range(m):
        for j in range(n):
            if i == 0:
                Sums.append(Scores[i][j])
            else:
                Sums[j] += Scores[i][j]

    # 最大値を出力
    print(max(Sums))

