/*****                                            
 *                                                   __Bismillahir Rahmanir Rahim__
 *                                          American International University Bangladesh (AIUB) 
 *                                                         Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
ll n,a,b,c,k=0,s1=0,s2=0,s3=0;
cin>>n;


for(int i=1;i<=n;i++)
{
   cin>>a>>b>>c;
   
    
    s1+=a;
    s2+=b;
    s3+=c;
}
if(s1==0 && s2==0 && s3==0)
{
  cout<<"YES\n";
}
else
{
  cout<<"NO\n";
}



}

int main()
{
  int t=1;
  //cin>>t
  while(t--)
  {
    solve();
  }
  //cout<<
    return 0;
}
 