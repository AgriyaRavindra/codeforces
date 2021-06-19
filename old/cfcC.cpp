#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int tt; cin>>tt;
  while(tt--){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(i == j || (i + j) == (n-1)){
          a[i][j] = 1;
        }else{
          a[i][j] = 0;
        }
      }
    }
    if(n%2 == 1){
      a[(n+1)/2 - 1][(n+1)/2 - 1] = 2;
    }
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        cout<<a[i][j]<<" ";
      }
      cout<<"\n";
    }
  }
  return 0;
}