#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N,x;
    cin>>N;
		int C[3]={};
		for(int i=0; i<N; i++) {
			cin>>x;
			C[x%3]++;
		}
		int cnt=0;
		for(int j=0; j<3; j++) {
			for(int i=0; i<3; i++) {
				if(C[i]>N/3) {
					cnt+=C[i]-N/3;
					C[(i+1)%3]+=C[i]-N/3;
					C[i]=N/3;
				}
			}
		}
		cout<<cnt<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin>>tt;
    while(tt--) solve();
    return 0;
}