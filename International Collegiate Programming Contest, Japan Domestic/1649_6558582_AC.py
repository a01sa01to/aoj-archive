/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1649/judge/6558582/Python3
 * Submitted at: 2022-05-02 13:27:23
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1649
 * Result: AC
 * Execution Time: 0.09 s
 */

class UnionFind:
    def __init__(self, n):
        self.par = [-1 for i in range(n)]

    # 2頂点を結合する
    def unite(self, x, y):
        a = self.root(x)
        b = self.root(y)
        if a != b:
            if -self.par[a] < -self.par[b]:
                t = a
                a = b
                b = t
            self.par[a] += self.par[b]
            self.par[b] = a
        return a

    # 2頂点は連結か
    def same(self, x, y):
        return self.root(x) == self.root(y)

    # 頂点xの木の根を返す
    def root(self, x):
        if self.par[x] < 0:
            return x
        else:
            self.par[x] = self.root(self.par[x])
            return self.par[x]

    # 頂点xが属する木のサイズを返す
    def size(self, x):
        return -self.par[self.root(x)]


while True:
    # 入力
    w, h = map(int, input().split())

    # もしwとhが両方0であれば、終了
    if w + h == 0:
        break

    # 決められたマスからグラフを生成
    # グラフは[上1, 上2, ..., 上w, 左1, 左2, ..., 左h]とする
    uf = UnionFind(w + h)
    for _ in range(w + h - 1):
        x, y, n = map(int, input().split())
        uf.unite(x - 1, y - 1 + w)

    # 全頂点が連結であるか調べる
    # この場合、頂点0と連結な頂点数 = w+h かどうかをチェックしている
    # 連結であればYes、そうでなければNo。
    if uf.size(0) == w + h:
        print("YES")
    else:
        print("NO")

