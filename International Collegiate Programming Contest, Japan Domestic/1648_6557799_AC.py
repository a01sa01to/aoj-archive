/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1648/judge/6557799/Python3
 * Submitted at: 2022-05-02 10:37:51
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1648
 * Result: AC
 * Execution Time: 0.02 s
 */

def gcd(x, y):
    if y == 0:
        return x
    return gcd(y, x % y)


while True:
    # 入力
    a, b, c, d = map(int, input().split())

    # もしすべての要素が0であれば終了
    if a + b + c + d == 0:
        break

    # すべての数の最大公約数を求める
    g = a
    g = gcd(g, b)
    g = gcd(g, c)
    g = gcd(g, d)

    # 答えはすべての数の最大公約数 g
    print(g)

