#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin>>a>>b;
	long long ans =1;
	for(int i=1; i<=(max(a,b)-min(a, b));i++)
		ans *=32;
	cout<<ans;
	return 0;
}