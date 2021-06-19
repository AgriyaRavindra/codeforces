#include <bits/stdc++.h>
using namespace std;
#define SZ(v) int((v).size())
#define ALL(vec) begin(vec), end(vec)
typedef long long i64;
template<typename T> inline bool uax(T &x, T y) {return (y > x) ? x = y, true : false;}
template<typename T> inline bool uin(T &x, T y) {return (y < x) ? x = y, true : false;}
template<typename T> void kek(T ans) {cout << ans << endl; exit(0);}
#define Luv(...) [&] (auto &&u, auto &&v) { return __VA_ARGS__; }
const int MOD = (int) 1e9 + 7;
const i64 INF = (i64) 1e18 + 42;

int main() {
  cin.tie(nullptr) -> sync_with_stdio(false);
    int tt;
    cin>>tt;
    while(tt--){
        int n; cin>>n;
        vector<int> v(n);
        int sum =0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            sum += v[i];
        }
        int x = -(sum)/v[n-1];
        for(int i=0; i<n; i++){
            if(i == n-1){
                cout<<x<<"\n";
            }else{
                cout<<1<<" ";
            }
        } 
        
    }

}
