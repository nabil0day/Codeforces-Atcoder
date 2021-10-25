#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    long long one = 0, z = 1;
    for (int i = 1; i <= n; i++) {
      int x; cin >> x;
      one += x == 1;
      if (x == 0) z *= 2;
    }
    cout << z * one << '\n';
  }
  return 0;
}