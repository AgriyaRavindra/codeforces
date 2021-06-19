#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int sumO = 0;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i] == 1) sumO += 1;
    }
    if(sumO%2 == 0 ){
        cout<<"YES"<<"\n";
    }else if(sumO == 0 && n%2 == 1){
        cout<<"NO"<<"\n";
    }else{
        cout<<"NO"<<"\n";
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