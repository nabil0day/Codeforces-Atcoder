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
   ll t;
   cin>>t;
   while(t--)
   {
       ll n,x;
       cin>>n;
       ll odd=0,even=0;
       n=n*2;
       for(ll i=1;i<=n;i++)
       {
           cin>>x;
           if(x%2==0)
           even++;
           else
           odd++;
       }
       if(even==odd)
       {
           cout<<"Yes\n";
       }
       else{
           cout<<"No\n";
       }
   }
}

 

 


