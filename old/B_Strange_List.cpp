#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long sum = 0,n,x,f = 0;
    cin>>n>>x;
    vector<long long> v(n);
    for(long long& e: v) cin>>e;
    for(auto& d: v){
        sum += d;
    }
    for(int i=0; i<n; i++){
        if(v[i]%x == 0){
            sum += v[i];
            long long sm = 0,c = v[i];
            while(c%x == 0){
                sm += c;
                c /= x;
            }
            sum += sm*x;
        }else if(v[i]%x != 0){
            f = 1;
            cout<<sum<<"\n";
            break;
        }
    }
    if(f == 0){
        cout<<sum<<"\n";
    }
    
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