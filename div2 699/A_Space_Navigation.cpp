#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x,y;
    string s;
    cin>>x>>y;
    cin>>s;
    int a[4];
    int n = s.size();
    for(int i=0; i<n; i++){
        if(s[i] == 'R') a[0] += 1;
        if(s[i] == 'U') a[1] += 1;
        if(s[i] == 'L') a[2] += 1;
        if(s[i] == 'D') a[3] += 1;
    }
    if((a[0] + a[2] >= abs(x) && a[1] + a[3] >= abs(y))){
        cout<<"YES\n";
    }else {
        cout<<"NO\n";
    }
    
} 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin>>tt;
    while(tt--) solve();
    return 0;
}