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
    
#define SF(v) for(auto &x: v) cin>>x
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

// void solve(){
//     ll n; cin>>n;
//     if(n <= 9){
//         cout<<n<<"\n";
//         return ;
//     }
//     for(int i=1; i<10; i++){
//         cout<<i<<"\n";
//     }
//      ll cnt=9;
//     ll f,s;
//     for(int i=1; i<n; i++){
//         if(i > 9 && i < 100 && (i%11 == 0)){
//             cnt++;
//         }else if(i > 99){
//             ll nu = i;
//             ll pr=nu % 10, res;
//             nu /= 10;
//             while(nu > 0){
//                 res = nu % 10;
//                 if(res != pr){
//                     break;
//                 }else{
//                     pr = res;
//                 }
//                  nu /= 10;
//             }
//             if(nu == 0 && pr == res) {
//                 cnt++;
//             }
            
//         }
        
//     }
//     cout<<cnt<<"\n";

// }

void solve(){
    string s;
    cin>>s;
    cout<<stoll(s)<<"\n";
    // int n = s.size();
    // int ans = (n-1)*9;
    // stringstream number(s);
    // int num ;
    // number >> num;
    // int res,q=num;
    // while(q > 0){
    //     res %= 10;
    //     q /= 10;
    // }
    // string str = ""; 
    // FOR(i,0,n){
    //     str[i] += 2;
    // }
    // stringstream sec(str);
    // int n1 ;
    // sec >> n1;
    // if(n1 == num){
    //     ans += res;
    // }else{
    //     ans += res-1;
    // }
    // cout<<ans<<"\n";
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}