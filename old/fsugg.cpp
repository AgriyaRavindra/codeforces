#include <bits/stdc++.h>
using namespace std;
#define SZ(v) int((v).size())
#define ALL(vec) begin(vec), end(vec)
typedef long long i64;
template<typename T> inline bool uax(T &x, T y) {return (y > x) ? x = y, true : false;}
template<typename T> inline bool uin(T &x, T y) {return (y < x) ? x = y, true : false;}
template<typename T> void kek(T ans) {cout << ans << endl; exit(0);}
#define Luv(...) [&] (auto &&u, auto &&v) { return __VA_ARGS__; }


void test_case_solve(){
    i64 n,x;
    cin>>n>>x;
    i64 m = n/2;
    if(n%x != 0){
        cout<<n<<"\n";
    }else{
        if(m%x != 0){
            cout<<m<<"\n";
        }else{
            while(m--){
                if((n%m == 0) && (m%x != 0)){
                    cout<<m<<"\n";
                    break;
                }
            }
        }
    }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin>>tt;
  while(tt--){
      test_case_solve();
  }
  return 0;
}