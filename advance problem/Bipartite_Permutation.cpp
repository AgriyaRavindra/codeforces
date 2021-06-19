#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll i =1;
void solve(){
    ll n; cin>>n;
    n = ((n+1)*n)/2;
    cout<<"Case "<<i<<": ";
    if(n%2 == 0) cout<<0<<"\n";
    if(n%2 == 1) cout<<1<<"\n";
    i++;
} 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll T; cin>>T;
    while(T--) solve(); 
    return 0;
}