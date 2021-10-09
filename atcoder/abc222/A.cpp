#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num; cin>>num;
	if(num>999)
	{
		cout<<num;
	}
	else if(num>99)
	{
		cout<<"0"<<num;
	}
	else if(num>9)
	{
		cout<<"00"<<num;
	}
	else
	{
		cout<<"000"<<num;
	}
}