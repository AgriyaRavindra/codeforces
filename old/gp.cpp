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
    vector<int> v1(n);
    vector<int> v2(n);
    for(int i=0; i<n; i++){
      cin>>v1[i];
    }
    for(int i=0; i<n; i++){
      cin>>v2[i];
    }
    sort(v1.begin(),v1.end());
    sort(v2.rbegin(),v2.rend());
    int flag =0;
    for(int i=0; i<n; i++){
      if((v1[i] + v2[i]) > x){
        cout<<"NO"<<"\n";
        flag = 1;
        break;
      }
    }
    if(flag == 0){
        cout<<"YES"<<"\n";
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