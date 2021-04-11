#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,sum=0;
	char s[100];
	cin >> n >> s;
	for (j=0,i = 1;i < n;i++,j++)
	{
		if (s[i] == s[j])
		{
			sum++;
		}
	}
	cout<<sum;
}