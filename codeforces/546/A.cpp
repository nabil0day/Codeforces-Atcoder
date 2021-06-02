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
ll k,n,w,sum=0;
cin>>k>>n>>w;

for(ll i=1;i<=w;i++)
{
  sum+=i;

}
ll x=(sum*k);
ll borr=(x-n);
if(borr<0)
{
  cout<<"0\n";
}
else{
  cout<<borr;
}

}
 