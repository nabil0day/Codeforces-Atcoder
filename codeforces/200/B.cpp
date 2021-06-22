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
     int a,n;
    float sum=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        sum=sum+a;
    }
    cout<<sum/n;

  
return 0;

}
 