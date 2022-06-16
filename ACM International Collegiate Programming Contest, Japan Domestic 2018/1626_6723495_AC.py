/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1626/judge/6723495/Python3
 * Submitted at: 2022-06-16 12:41:44
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1626
 * Result: AC
 * Execution Time: 1.89 s
 */

from math import floor, sqrt


while True:
    b = int(input())
    if b == 0:
        break

    # nを決め打ちして探す
    for n in range(int(floor(sqrt(2 * b))), 0, -1):
        # もし整数ではなくなってしまう場合
        if 2 * b % n != 0 or (2 * b / n - n + 1) % 2 != 0:
            continue

        # aを求める（上でチェックしているので、この値は整数であることが保証されている）
        a = (2 * b // n - n + 1) // 2

        # 問題文の制約よりa>=1なので、こうなるかをチェックする
        # nを最大化する問題で、nを大きいほうからチェックしているので、ここで出力しても問題ない
        if a >= 1:
            print(a, n)
            break

