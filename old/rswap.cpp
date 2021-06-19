#include<bits/stdc++.h>
using namespace std;
#define FOR(x,n) for(int i=x; i<n; i++) 
#define pb push_back
typedef long long ll;

int solve(vector<string> v){
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll t,q,k;
  cin>>t>>q;
  ll s = pow(2,t);
  vector<ll> v;
  FOR(0,s){
      ll n;
      cin>>n;
      v.pb(n);
  }
  ll qn;
  cin>>qn;
  if(qn==1){
      ll x;
      cin>>x>>k;
      v[x+1]=k;
  }
  if(qn==2){
    cin>>k;
    FOR(0,s){
      ll a1,a2,temp;
      i++;
      a1 = (i-1)*pow(2,k) + 1;
      a2 = i*pow(2,k);
      temp = v[a1];
      v[a1]=v[a2];
      v[a2]= temp;
    }
  }
  if(qn==3){
    cin>>k;
    FOR(0,s){
      ll a1,a2,a3,a4,temp1,temp2;
      i++;
      a1 = (2*i-2)*pow(2,k) + 1;
      a2 = (2*i-1)*pow(2,k);
      a3 = (2*i-2)*pow(2,k) + 1;
      a4 = (2*i)*pow(2,k);
      temp1 = v[a1];
      v[a1]= v[a3];
      v[a3]= temp1;
      temp2 = v[a2];
      v[a2] = v[a4];
      v[a4] = temp2;
    }
  }
  if(qn==4){
    ll l,r,sum=0;
    cin>>l>>r;
    FOR(l,r){
      sum+=v[i];
    }
    cout<<sum<<"\n";
  }

  
  return 0;
}