/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1633/judge/6649903/Python3
 * Submitted at: 2022-05-25 16:22:57
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1633
 * Result: AC
 * Execution Time: 0.13 s
 */

while True:
    # 入力
    h, w = map(int, input().split())
    if h+w == 0:
        break
    r = [list(input()) for _ in range(h)]
    s = input()

    # 各文字がどこにあるかを記録
    m = {}
    for i in range(h):
        for j in range(w):
            if r[i][j] != '_':
                m[r[i][j]] = (i, j)

    # 最初は (0,0) からスタート
    (x, y) = (0, 0)

    # 答えを格納する変数
    ans = 0

    # 各文字に対して、最短経路を求めて移動を繰り返す
    for i in range(len(s)):
        # 入力する文字
        c = s[i]

        # 移動先の位置
        (nx, ny) = m[c]

        # 移動先までの距離
        d = abs(nx - x) + abs(ny - y)

        # 移動先に移動
        (x, y) = (nx, ny)

        # 移動先までの距離を足す
        ans += d

        # OKを押す分
        ans += 1

    print(ans)

