#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x = 9;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        v[i] = x%10;
        x += 9;
    }
    for(auto& d: v){
        cout<<d;
    }
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t =1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}