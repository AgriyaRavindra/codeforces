#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve(){
    ll n;
    cin>>n;
    ll p = __builtin_popcountll(n);
    cout<<p<<"\n";
    cout<<(p == 1? "NO\n":"YES\n");
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