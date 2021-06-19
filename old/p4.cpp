#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ll n,cnt = 0;
	vector <ll> v(n);
	while(n--){
		ll x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	unsigned char x,y;
	x = v[n-1];
	y = v[n-2];
	v[n-1] = x|y;
	v[n-2] = x&y;

	for(int i = 0;i < n; i++){
		cnt += pow(v[i],2);
	}

	return 0;
} 

https://codeforces.com/problemset/problem/1368/D