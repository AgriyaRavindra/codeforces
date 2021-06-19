#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;
typedef pair<string, int> SP;
typedef long long ll;
typedef pair<ll, ll> PLL;

const int INF = 1e9;
const ll LLINF = 1e18;
const int MAX_V = 1e6+1;



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string s;
  getline(cin , s);
  ll n;
  cin>>n;
  int d = (int)(n % 4);
 // cout<<s[0]<<" "<<s[2]<<" "<<n<<" "<<d<<"\n";
 if(d == 0 || d == 2){
   cout<<"undefined"<<"\n";
 }else if(d == 1){
   if(s[0] == '^' && s[2] == '>'){
     cout<<"cw"<<"\n";
   }else if(s[0] == '^' && s[2] == '<'){
     cout<<"ccw"<<"\n";
   }
    if(s[0] == '>' && s[2] == 'v'){
     cout<<"cw"<<"\n";
   }else if(s[0] == '>' && s[2] == '^'){
     cout<<"ccw"<<"\n";
   }
    if(s[0] == 'v' && s[2] == '<'){
     cout<<"cw"<<"\n";
   }else if(s[0] == 'v' && s[2] == '>'){
     cout<<"ccw"<<"\n";
   }
    if(s[0] == '<' && s[2] == '^'){
     cout<<"cw"<<"\n";
   }else if(s[0] == '<' && s[2] == 'v'){
     cout<<"ccw"<<"\n";
   }
 }else if(d == 3){
   if(s[0] == '^' && s[2] == '<'){
     cout<<"cw"<<"\n";
   }else if(s[0] == '^' && s[2] == '>'){
     cout<<"ccw"<<"\n";
   }if(s[0] == '>' && s[2] == '^'){
     cout<<"cw"<<"\n";
   }else if(s[0] == '>' && s[2] == 'v'){
     cout<<"ccw"<<"\n";
   }if(s[0] == 'v' && s[2] == '>'){
     cout<<"cw"<<"\n";
   }else if(s[0] == 'v' && s[2] == '<'){
     cout<<"ccw"<<"\n";
   }if(s[0] == '<' && s[2] == 'v'){
     cout<<"cw"<<"\n";
   }else if(s[0] == '<' && s[2] == '^'){
     cout<<"ccw"<<"\n";
   }

 }

}
