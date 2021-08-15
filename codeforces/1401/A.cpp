#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int T=1;
	cin>>T;
	while(T--){
	   int a,b;
	   cin>>a>>b;
	   if(a==b) cout<<0<<"\n";
	   else if(b>a) cout<<b-a<<"\n";
	   else{
	   	if(a%2==b%2) cout<<0<<"\n";
	   	else cout<<1<<"\n";
	   }
	   
	}
	return 0;
}