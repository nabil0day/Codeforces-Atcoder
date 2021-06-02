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
    ll count=0;
    cin>>s;
    sort(s.begin(),s.end());

for(ll i=0;i<s.size();i++)
{
  if(s[i]!=s[i+1])
  {
    count++;
  }
}

if(count%2==0)

{
  cout<< "CHAT WITH HER!\n" ;
}
   else{
     cout<<"IGNORE HIM!\n";
   } 

}
 