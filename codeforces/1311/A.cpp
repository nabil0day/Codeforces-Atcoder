/*****                                            
 *                                                   __Bismillahir Rahmanir Rahim__
 *                                          American International University Bangladesh (AIUB) 
 *                                                         Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
   {
      ll a,b;
      cin>>a>>b;
      if(a==b)
      {
          cout<<"0\n";
      } 
      else{
          cout<< 1+((a<b)^((b-a)&1))<<"\n";
      }
   }
}

 

 


