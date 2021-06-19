#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin>>t;
  int s[11];
  for(int i =0; i<10; i++){
    s[i] = 0;
  }
  while (t--){
    int n,num = 0;
    cin>>n;
    int real = n;
    num = n;
    while(n > 1){
      int r = n%10;
      if(real%r != 0){
        num = max(num , real + r);
      }
    }
  }
  return 0;
} 