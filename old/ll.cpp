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

int solve_test_case(){
  i64 n,cnt = 0,x;
  cin>>n>>x;
  vector<int> arr(n);
  //int array[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
   sort(arr.begin(),arr.end());
  auto a = lower_bound(arr.begin(), arr.end(), x); 
  if (a < n && arr[a] == x) {
    cout<<a<<"\n";
   }
  auto b = upper_bound(arr.begin(), arr.end(), x); 
  cout << b - a << "\n";
  auto r = equal_range(arr.begin(), arr.end(), x);
  //cout << r.second-r.first << "\n";
  cnt = r.second-r.first;
  return cnt;
}    

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
   int tt;
   cin>>tt;
   while(tt--){
     i64 ans = solve_test_case();
     cout<<ans<<"\n";
   }
}
