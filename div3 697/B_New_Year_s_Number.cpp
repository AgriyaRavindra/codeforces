#include <bits/stdc++.h>
using namespace std;

const string YES = "YES", NO = "NO";
const int A = 2020, B = 2021;

int solve(){
    int n;
    cin>>n;
    while(n >= B && n%A != 0) n -= B;
    cout<<(n%A == 0 ? YES : NO)<<"\n";
    // for(int i=0; i<=n; i += A){
    //     int y = (n-i)/B;
    //     if(i + y * B == n){
    //         cout<<YES<<"\n";
    //         return 0;
    //     }
    // }
    // cout<<NO<<"\n";
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    } 
    return 0;
}