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
   int n,h,t,count=0;
   cin>>n>>h;
   for(int i=1;i<=n;i++)
   {
       cin>>t;
       count++;
       if(t>h)
       count++;
   }
   cout<<count<<endl;
   return 0;

}

 

 


