#include <bits/stdc++.h>
using namespace std;
#define SZ(v) int((v).size())
#define ALL(vec) begin(vec), end(vec)
typedef long long i64;
template <typename T>
inline bool uax(T &x, T y) { return (y > x) ? x = y, true : false; }
template <typename T>
inline bool uin(T &x, T y) { return (y < x) ? x = y, true : false; }
template <typename T>
void kek(T ans)
{
  cout << ans << endl;
  exit(0);
}
#define Luv(...) [&](auto &&u, auto &&v) { return __VA_ARGS__; }
const int MOD = (int)1e9 + 7;
const i64 INF = (i64)1e18 + 42;

void solve_test_case()
{
  i64 n, k;
  cin >> n >> k;
  string s;

  for (int i = 0; i < n; i++)
  {
    s += char('a' + i % 2);
  }
  cout << s << "\n";
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--)
  {
    solve_test_case();
  }
}