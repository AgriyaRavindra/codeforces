#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,d; cin>>n>>d;
    // vector<int> v(n);
    // for(int &x: v) cin>>x;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        if(x%d == (d/2) + 1){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin>>tt; while(tt--) solve();
    return 0;
}