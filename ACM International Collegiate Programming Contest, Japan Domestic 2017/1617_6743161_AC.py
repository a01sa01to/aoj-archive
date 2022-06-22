/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1617/judge/6743161/Python3
 * Submitted at: 2022-06-22 19:26:03
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1617
 * Result: AC
 * Execution Time: 0.03 s
 */

while True:
    # 入力
    s1 = input()
    if s1 == ".":
        break
    s2 = input()

    # IDENTICALのチェック
    if s1 == s2:
        print("IDENTICAL")
        continue

    # 文字列の個数が同じかどうかのチェック
    # 異なっていればDIFFERENT
    s1_cnt = 0
    s2_cnt = 0
    for c in s1:
        if c == '"':
            s1_cnt += 1
    for c in s2:
        if c == '"':
            s2_cnt += 1
    if s1_cnt != s2_cnt:
        print("DIFFERENT")
        continue

    # 現在文字列をチェックしているかどうか
    readingString = False
    # 現在見ている場所
    idx1 = 0
    idx2 = 0
    # 違う文字列のカウント
    cnt = 0

    # 繰り返し
    while idx1 < len(s1) and idx2 < len(s2):
        # 文字列を読んでいない場合
        if not readingString:
            # 現在見ている文字が異なっていれば、DIFFERENT
            # カウントを1より大きい数にして、ループを抜ける
            if s1[idx1] != s2[idx2]:
                cnt = 100000
                break

            # "が始まったら文字列を読んでることにする
            if s1[idx1] == '"':
                readingString = True

        else:
            # 現在見ている文字が違う場合、カウントを1増やす
            # そして、文字列を抜ける = 終点に持ってくる
            if s1[idx1] != s2[idx2]:
                cnt += 1
                while s1[idx1] != '"':
                    idx1 += 1
                while s2[idx2] != '"':
                    idx2 += 1

            # "の終点になったら文字列を抜ける
            if s1[idx1] == '"':
                readingString = False

        # 1文字送る
        idx1 += 1
        idx2 += 1

    # 違う文字列のカウントをチェックして、CLOSEかDIFFERENTを出力
    print("CLOSE" if cnt <= 1 else "DIFFERENT")

