#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n, k;
	cin >> n >> k ; 
	ll cur = 1, nxt, res = 0;
	for(int i = 0; i < k; ++i) {
		cin >> nxt ; 
		if(nxt >= cur) 
		  res += (nxt - cur);
		else 
		   res += (n + nxt - cur);
		   cur = nxt;
	}
	cout << res <<"\n"; 
	return 0;
}