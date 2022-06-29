/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1609/judge/6763631/Python3
 * Submitted at: 2022-06-29 19:14:30
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1609
 * Result: AC
 * Execution Time: 0.41 s
 */

while True:
    # 入力
    n = int(input())
    if n == 0:
        break
    c = list(input().split())

    # 票数を格納しておく
    votes = [0] * 26

    for i in range(n):
        # 票数を1増やす
        votes[ord(c[i]) - ord('A')] += 1

        # 1・2番目に票数が多い人を探す
        maxim1 = (0, -1)
        maxim2 = (0, -1)
        for j in range(26):
            # 1番目に大きい場合、暫定1位を暫定2位にずらしてから、上書き
            if votes[j] > maxim1[0]:
                maxim2 = maxim1
                maxim1 = (votes[j], j)
            # 2番目に大きい場合、暫定2位を上書き
            elif votes[j] > maxim2[0]:
                maxim2 = (votes[j], j)

        # 残り票数
        rem = n - i - 1
        # もし暫定1位の票数が、暫定2位の票数+残り票数なら勝てないので確定
        if maxim1[0] > maxim2[0] + rem:
            print("{} {}".format(chr(maxim1[1] + ord('A')), i + 1))
            break
        # 残り票数がない かつ「1位の票数 > 2位の票数」ではない
        # つまり、引き分け
        elif rem == 0:
            print("TIE")

