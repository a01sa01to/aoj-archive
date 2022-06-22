/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1618/judge/6743251/C++17
 * Submitted at: 2022-06-22 20:05:10
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1618
 * Result: AC
 * Execution Time: 0.0 s
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  while (true) {
    int d, w;
    cin >> d >> w;
    if (d + w == 0) break;
    vector<vector<int>> Grid(d, vector<int>(w));
    rep(i, d) rep(j, w) cin >> Grid[i][j];
    int ans = 0;
    rep(ax, d) rep(ay, w) {
      rep(bx, d) rep(by, w) {
        if (ax >= bx || ay >= by) continue;
        int wall_min = 100;
        for (int i = ax; i <= bx; i++) {
          wall_min = min(wall_min, Grid[i][ay]);
          wall_min = min(wall_min, Grid[i][by]);
        }
        for (int j = ay; j <= by; j++) {
          wall_min = min(wall_min, Grid[ax][j]);
          wall_min = min(wall_min, Grid[bx][j]);
        }

        bool over = false;
        int t = 0;
        for (int i = ax + 1; i < bx; i++) {
          for (int j = ay + 1; j < by; j++) {
            if (Grid[i][j] >= wall_min) over = true;
            t += wall_min - Grid[i][j];
          }
        }
        if (!over) ans = max(ans, t);
      }
    }
    cout << ans << endl;
  }
  return 0;
}
