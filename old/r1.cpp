#include<bits/stdc++.h>
using namespace std;
//typedef long long ll;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin>>t;
  for(int i =0;i<t; i++){
    int n; cin>>n;
    while(n--){
      int x;
      x = rand() % 1001;
      cout<<x<<" ";
      if(n == 0){
        cout<<"\n";
      }
      
    }
  }
  return 0;
}