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
    string a,b;
    cin>>a>>b;
    int n = a.size();
    int m = b.size();
    if(n==m == 1 && a[0] == b[0]) {
        cout<<0<<"\n";
        return;
    }
    int mx=0,l1=0,l2=0,h1=max(n,m),h2=max(n,m),cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i] == b[i]){
                l1 = i;
                l2 = j;
                for(int k=j; k<m; k++){
                    if(a[i] == b[k]){
                        cnt++;
                    }else{
                        mx = max(cnt,mx);
                        h1 = k;
                        h2 = l2 + abs(h1-l1);
                        break;
                    }
                }
            }
        }
    }
    int ans= mx;
    cout<<ans<<"\n";
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}