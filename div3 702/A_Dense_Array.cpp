#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin>>n;
    int cnt = 0;
    vector<int> v(n);
    for(auto &x: v) cin>>x;
    for(int i=0; i<(n-1);i++){
        int a = v[i];
        int b = v[i+1];
        if(a>b) swap(a,b);
        while(2*a < b){
            cnt++;
            a *= 2;
        }
    }
    cout<<cnt<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin>>tt;
    while(tt--) solve();
    return 0;
}