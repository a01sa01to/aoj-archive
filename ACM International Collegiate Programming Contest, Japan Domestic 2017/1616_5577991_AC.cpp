/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1616/judge/5577991/C++
 * Submitted at: 2021-06-17 18:26:58
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1616
 * Result: AC
 * Execution Time: 0.0 s
 */

#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ull> ull1d;
typedef vector<ull1d> ull2d;
typedef vector<ull2d> ull3d;
#define loop(i,n) for(ull i=0;i<n;i++)
#define rloop(i,n) for(ll i=n-1;i>=0;i--)
#define all(vec) vec.begin(),vec.end()
template<class T> inline bool chmin(T& a,T b){ if(a>b){ a=b; return true;} return false; }
template<class T> inline bool chmax(T& a,T b){ if(a>b){ a=b; return true;} return false; }

int main(){ cout << fixed << setprecision(15);
  while(true){
    ull n,m;
    cin >> n >> m;
    if(n==0 && m==0){ return 0; }
    ull1d a(n);
    loop(i,n){ cin >> a[i]; }
    ull maxim = 0;
    for(ull i=0;i<n-1;i++) for(ull j=i+1;j<n;j++){
      if(a[i] + a[j] <= m){
        maxim = max(maxim, a[i]+a[j]);
      }
    }
    if(maxim == 0){ cout << "NONE" << endl; }
    else{ cout << maxim << endl; }
  }
  return 0;
}
