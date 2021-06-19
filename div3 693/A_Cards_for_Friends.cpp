#include <bits/stdc++.h>
using namespace std;

void solve(){
    long w,h,n,cnt =0;
    cin>>w>>h>>n;
    if(w%2 ==1 && h%2 == 1 && n == 1){
        cout<<"YES"<<"\n";
        return;
    }else if(w%2 ==1 && h%2 == 1 && n > 1){
        cout<<"NO"<<"\n";
        return;
    }else if(w == 2 && h == 2 && n <= 4){
        cout<<"YES"<<"\n";
        return ;
    }else if(w%2 == 0){
        while(w%2 == 0){
            w /= 2; 
            cnt++;
            if(cnt*2 >= n){
                cout<<"YES"<<"\n";
                return;
            }
        }
    }else if(h%2 == 0){
        while(h%2 == 0){
            h /= 2;
            cnt++;
            if(cnt*2 >= n){
                cout<<"YES"<<"\n";
                return;
            }
        }
    }
    cout<<"NO"<<"\n";
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