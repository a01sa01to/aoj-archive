/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1608/judge/5610761/C++
 * Submitted at: 2021-06-24 18:18:07
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1608
 * Result: AC
 * Execution Time: 0.01 s
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
    int n;
    cin >> n;
    if(n==0){ break; }
    ull1d a(n);
    loop(i,n){ cin >> a[i]; }
    sort(all(a));
    ull minim = 1e6+1;
    loop(i,n-1){
      minim = min(minim, a[i+1]-a[i]);
    }
    cout << minim << endl;
  }
  return 0;
}
