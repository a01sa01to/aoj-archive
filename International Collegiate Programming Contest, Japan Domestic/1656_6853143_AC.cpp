/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/1656/judge/6853143/C++17
 * Submitted at: 2022-08-02 10:48:07
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/1656
 * Result: AC
 * Execution Time: 0.0 s
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int n;cin>>n;
        if(!n) break;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int ans = 0;
        for(int i=1;i<n-1;i++) ans += (a[i-1] < a[i] && a[i] > a[i+1]);
        cout << ans << endl;
    }
}
