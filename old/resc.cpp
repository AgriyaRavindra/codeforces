#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod =1e9+7;
int main(){
	cin.tie(NULL);
    ios_base::sync_with_stdio();

		int t;
		cin>>t;
		string str;
		int x;
		while(t--){
			cin>>str;
			cin>>x;
			int n=str.length();
			string res;
			res.resize(n);
			int i;
			
			for( i=0;i<n;i++) res[i]='1';
			
			for( i=0;i<n;i++){
				if(str[i]=='0'){
					if(i>=x) res[i-x]='0';
					if(i+x<n) res[i+x]='0';
				}
			}
			
			for( i=0;i<n;i++){
				if(str[i]=='1'){
					if(i>=x && res[i-x]=='1' || i+x<n && res[i+x]=='1')
					continue;
					else break;
				} else{
					if(i>=x){
						if(res[i-x]=='0'){
							if(i+x<n ){
								if(res[i+x]!='0') break;
							}
						}
					} else{
						if(i+x<n ){
							if(res[i+x]!='0') 
								break;
						}
					}
				}
			}
			
			if(i!=n) cout<<-1<<endl;
			else
			cout<<res<<endl;
		}
		

	return 0;
}