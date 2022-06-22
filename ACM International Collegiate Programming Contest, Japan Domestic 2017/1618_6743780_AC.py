/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1618/judge/6743780/Python3
 * Submitted at: 2022-06-22 22:55:24
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1618
 * Result: AC
 * Execution Time: 1.13 s
 */

while True:
    d, w = map(int, input().split())
    if d + w == 0:
        break
    Grid = [list(map(int, input().split())) for _ in range(d)]

    # 仮に答えを0にしておく
    ans = 0
    # 囲う長方形の左上の点と右下の点を全探索する
    for ax in range(d):
        for ay in range(w):
            for bx in range(d):
                for by in range(w):

                    if ax >= bx or ay >= by:
                        continue

                    # 一番低い「壁」の高さを求める
                    wall_min = 100
                    # 縦に並んでいる壁
                    for i in range(ax, bx + 1):
                        wall_min = min(wall_min, Grid[i][ay])
                        wall_min = min(wall_min, Grid[i][by])
                    # 横に並んでいる壁
                    for j in range(ay, by + 1):
                        wall_min = min(wall_min, Grid[ax][j])
                        wall_min = min(wall_min, Grid[bx][j])

                    # 壁からあふれるか
                    over = False
                    # この場合の池の容量
                    t = 0
                    # 内部のセルを調べる
                    for i in range(ax+1, bx):
                        for j in range(ay+1, by):
                            # 一番低い壁より標高が高い
                            if Grid[i][j] >= wall_min:
                                over = True
                            # 差を加える
                            # wall_min > Grid[i][j] でない場合は候補として使われない
                            t += wall_min - Grid[i][j]

                    # もし条件を満たしていれば、答えをこれまでの最大値と比較して更新
                    if not over:
                        ans = max(ans, t)

    print(ans)

