#include <bits/stdc++.h>
using namespace std;
    
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
    
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
    
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
    
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define trav(a,x) for (auto& a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
    
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
    
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
    
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    
const int MOD = 1000000007;
const int MX = 100001;
    
void solve(){
    int n,k;
    cin>>n>>k;
    if((n == k || k == (n-1)) && (n != 1 and k != 0)){
        cout<<-1<<"\n";
        return;
    }
    if(n == 1 and k == 0){
        cout<<1<<"\n";
        return ;
    }
    vector<int> v(n);
    for(int i=1; i<=n; i++){
        v[i-1] = i;
    }
    int s = n/2;
    int cnt=n-1;
    int id = 1;
    if(s >= k){
        while(k>0){
            if(k >= 0){
                swap(v[id],v[id+1]);
                cnt--;
                id += 2;
                k--;
            }else{
                break;
            }
        }
        for(auto d: v){
            cout<<d<<" ";
        }
        cout<<"\n";
    }else{
        cout<<-1<<"\n";
    }
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}