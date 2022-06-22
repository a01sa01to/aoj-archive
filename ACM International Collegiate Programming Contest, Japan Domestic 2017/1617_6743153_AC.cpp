/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1617/judge/6743153/C++17
 * Submitted at: 2022-06-22 19:19:55
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1617
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    // 入力
    string s1, s2;
    cin >> s1;
    if (s1 == ".") {
      break;
    }
    cin >> s2;

    // IDENTICALのチェック
    if (s1 == s2) {
      cout << "IDENTICAL" << endl;
      continue;
    }

    // いったん文字列の個数が同じかどうかチェックする
    // 異なっていればDIFFERENT
    int s1_cnt = 0, s2_cnt = 0;
    for (int i = 0; i < s1.size(); i++) {
      if (s1[i] == '"') s1_cnt++;
    }
    for (int i = 0; i < s2.size(); i++) {
      if (s2[i] == '"') s2_cnt++;
    }
    if (s1_cnt != s2_cnt) {
      cout << "DIFFERENT" << endl;
      continue;
    }

    // 現在文字列をチェックしているかどうか
    bool readingString = false;
    // 現在見ている場所
    int idx1 = 0, idx2 = 0;
    // 違う文字列のカウント
    int cnt = 0;

    // 繰り返し
    while (idx1 < s1.size() && idx2 < s2.size()) {
      // 文字列を読んでいない場合
      if (!readingString) {
        // 現在見ている文字が異なっていれば、DIFFERENT
        // カウントを1より大きい数にして、ループを抜ける
        if (s1[idx1] != s2[idx2]) {
          cnt = 100000;
          break;
        }
        // "が始まったら文字列を読んでることにする
        if (s1[idx1] == '"') {
          readingString = true;
        }
      }
      else {
        // 現在見ている文字が違う場合、カウントを1増やす
        // そして、文字列を抜ける = 終点に持ってくる
        if (s1[idx1] != s2[idx2]) {
          cnt++;
          while (s1[idx1] != '"') idx1++;
          while (s2[idx2] != '"') idx2++;
        }
        // "の終点になったら文字列を抜ける
        if (s1[idx1] == '"') {
          readingString = false;
        }
      }
      // 1文字送る
      idx1++, idx2++;
    }

    // 違う文字列のカウントをチェックして、CLOSEかDIFFERENTを出力
    cout << (cnt <= 1 ? "CLOSE" : "DIFFERENT") << endl;
  }
}
