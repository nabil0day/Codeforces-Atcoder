/*****                                            
 *                                                   __Bismillahir Rahmanir Rahim__
 *                                          American International University Bangladesh (AIUB) 
 *                                                         Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main()
{
	ll n,A,D;
	A=0;
	D=0;
	string s;
	cin>>n;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='A')
		A++;
		else 
		D++;
	}

	if(A>D) 
		cout<<"Anton";
    else if(D>A) 
	 cout<<"Danik";
    else
	 cout<<"Friendship\n";

	
		
	

  
  
 
    return 0;
}
 