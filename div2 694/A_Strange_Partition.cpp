#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    double n,x,mi = 0,mx =0;
    cin>>n>>x;
    vector<double> v(n);
    for(long i=0; i<n; i++){
        cin>>v[i];
        mx += ceil(v[i]/x);
        mi += v[i];
    }
    cout<<ceil(mi/x)<<" "<<mx<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt =0;
    cin>>tt;
    while(tt--){
        solve();
    } 
    return 0;
}