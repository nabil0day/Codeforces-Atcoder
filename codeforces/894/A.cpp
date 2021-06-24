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
  
  int count = 0;
  for(int i=0;i<s.length();i++)
  {
      for(int j=i+1;j<s.length();j++)
  {
     for(int k=j+1;k<s.length();k++) 
     {
         if(s[i]=='Q' && s[j]=='A' && s[k]=='Q')
         count++;
     }
  }
  }  
    
 cout<<count<<"\n";
return 0;

}
 