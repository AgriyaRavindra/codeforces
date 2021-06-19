#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,cnt = 0;
	cin>>n;
	while(n--){
		int x,y,z;
		cin>>x>>y>>z;
		if(((x or y) and z ) || (x and (y or z ))) cnt++;
	}
	cout<<cnt;
	return 0;
} 