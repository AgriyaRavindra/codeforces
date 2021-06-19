#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

//const int MOD = (int) 1e9 + 7;
//const i64 INF = (i64) 1e18 + 42;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
   time_t now = time(0);

   cout << "Number of sec since January 1,1970:" << now << endl;

   tm *ltm = localtime(&now);

   // print various components of tm structure.
   cout << "Year:" << 1900 + ltm->tm_year << endl;
   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
   cout << "Day: "<<  ltm->tm_mday << endl;
   cout << "Time: "<< 1 + ltm->tm_hour << ":";
   cout << 1 + ltm->tm_min << ":";
   cout << 1 + ltm->tm_sec << endl;
}

