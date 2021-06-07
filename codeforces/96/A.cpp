/*****                                            
 *                                                   __Bismillahir Rahmanir Rahim__
 *                                          American International University Bangladesh (AIUB) 
 *                                                         Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>
using namespace std;

int main()
{   
	int count=0;
	string s;
	cin>>s;
	
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==s[i+1])
		{
		count++;
		}
		else 
		{
			count=0;
		}

		if(count>=6)
		{
			break;
		}
		
	}
	if(count>=6)
	{
		cout<<"YES\n";
	}
	else 
	{
		cout<<"NO\n";
	}


    
	return 0;
}