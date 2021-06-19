#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
  
int lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}
int cnt =0;
void solve(){
    string s,t;
    cin>>s>>t;
    cnt++;
    cout<<cnt<<" ";
    int n,m,f = 0;
    n = s.size();
    m = t.size();
    int mx = max(n,m);
    if(mx == n){
        for(int i=0; i<n; i++){
            if(s[i] != t[i%m]){
                cout<<-1;
                f = 1;
                break;
            }
        }

    }else if(mx == m){
        for(int i=0; i<m; i++){
            if(t[i] != s[i%m]){
                cout<<-1;
                f = 1;
                break;
            }
        }
    }
    if(f == 1){
        int k = lcm(n,m);
        k = k/min(n,m);
        if(min(m,n) == m){
            for(int i=0; i<k; i++){
                cout<<t;
            }
            cout<<"\n";
        }else if(min(m,n) == n){
            for(int i=0; i<k; i++){
                cout<<s;
            }
            cout<<"\n";
        }
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