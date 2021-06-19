#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    if(n < k){
        int s = k/n;
        int m = k%n;
        if(m == 0){
        cout<<s<<"\n";
    }else {
        cout<<s+1<<"\n";
    }
    }else{
        int h = k/n;
        int j = k%n;
        if(j == 0){
        cout<<h<<"\n";
    }else {
        cout<<h+1<<"\n";
    }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin>>tt;
    while(tt--) solve();
    return 0;
}