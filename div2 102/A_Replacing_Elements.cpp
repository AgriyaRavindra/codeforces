#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,d;
    cin>>n>>d;
    vector<int> v(n);
    for(int &x : v) cin>>x;
    sort(v.begin(),v.end());
    if(v[0] + v[1] <= d || v[n-1] <= d) cout<<"YES"<<"\n";
  //  if() cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
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