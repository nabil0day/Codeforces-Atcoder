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
    ll n;
    ll ans=0;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        ans=ans+arr[i];
    }
    if(ans==n)
    {
        cout<<"0"<<endl;
    }
    else if(ans>n)
    {
        cout<<ans-n<<endl;
    }
    else
    {
        cout<<"1"<<endl;
    }
}
}
 
 
 

