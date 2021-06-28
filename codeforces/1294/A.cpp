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
    
    
   int t,a,b,c,n,maxn;
   cin>>t;
   for(int i=1;i<=t;i++)
   {
       cin>>a>>b>>c>>n;
       maxn=max(a,max(b,c));
       int s =a+b+c+n;
       if(s%3==0 && s/3>=maxn)
       {
           cout<<"YES\n";
       }
       else{
           cout<<"NO\n";
       }
   }
} 

 

 


