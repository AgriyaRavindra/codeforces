#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mx = 100001;

vector<int> *seive(){
    bool isPrime[mx];
    memset(isPrime,true,sizeof(isPrime));
    for(int i=2; i*i<mx; i++){
        if(isPrime[i]){
            for(int j=i*i; j<mx; j+=i){
                isPrime[j] = false;
            }
        }
    }
    vector<int> *prime = new vector<int>();
    prime -> push_back(2);
    for(int i=2; i<mx; i += 2){
        if(isPrime[i])
            prime->push_back(isPrime[i]);
    }
    return prime;
}

void printPrime(ll l,ll r,vector<int>* &prime){
    bool isPrime[r-l+1];
    for(int i=0; i<r-l; i++){
        isPrime[i] = true;
    }
    for(int i=0; (ll)prime->at(i)*(ll)prime->at(i) <= r; i++){
        int currPrime = prime->at(i);
        ll base = (l/currPrime)*(currPrime);
        if(base < l) base += currPrime;
        for(int j=base; j<=r; j += currPrime){
            isPrime[j-l] = false;
        }
        if(base == currPrime) isPrime[base-l] = true;
        for(int i=0; i<r-l; i++){
            if(isPrime[i]) cout<<i+l<<"\n";
        }
    }
}

void solve(){
    vector<int> *prime = seive();
    ll n,m; cin>>n>>m;
    printPrime(n,m,prime);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T; cin>>T;
    while(T--) solve();
    return 0;
}