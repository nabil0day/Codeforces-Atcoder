/**   Hadiur Rahman Nabil
 * 
 * 
 * */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() 
{
	ll n,t;
	cin>>n;
	t=(1.08*n);

	if(t<206)
	{
		cout<<"Yay!";
	}
	else if(t==206)
	{
		cout<<"so-so";
	}
	else 
	{
		cout<<":(\n";
	}
	return 0;


}
		