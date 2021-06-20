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
	
	string s;
	cin>>s;
	
	int four;
	int seven;
	int size=s.size();
	four=count(s.begin(),s.end(),'4');
	seven=count(s.begin(),s.end(),'7');

	if(four+seven==4 || four+seven==7)
	{

             cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}



	
	 
  return 0;
}
 