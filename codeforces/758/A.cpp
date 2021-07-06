/*****                                            
 *                                                   __Bismillahir Rahmanir Rahim__
 *                                          American International University Bangladesh (AIUB) 
 *                                                         Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define endl '\n'


    int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll n,i,a[100],large,ans=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    large = a[0];
    for(i=0;i<n;i++)
    {
        if(large<a[i])
            large=a[i];
    }

    for(i=0;i<n;i++)
    {
        ans+=large-a[i];
    }
    cout<<ans<<endl;
    
}




 

 


