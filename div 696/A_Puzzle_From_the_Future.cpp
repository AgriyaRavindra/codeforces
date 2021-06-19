#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    int f=0,s=0,x;
    for(int i=0; i<n; i++){
        cin>>x;
        if(i == 0){
            cout<<1;
            f = x;
        }else if(i == 1 && f == 1 && x == 1){
            cout<<0;
            s = x;
        }else if(i == 1 && f == 0 && x == 1){
            cout<<1;
            s = x;
        }else {
            if(s == x){
                if(x == 1){
                    cout<<0;
                }else if(x == 0){
                    cout<<1;
                }
            }else {
                cout<<1;
                
            }
            s = x;
        }
    }
    cout<<"\n";
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