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
ll t;
    cin>>t;
    for(int i=1;i<t-2;i+=2)
        cout<<i+1<<" "<<i<<" ";
    if(t%2==0)
        cout<<t<<" "<<t-1<<endl;
    else
        cout<<t<<" "<<t-2<<" "<<t-1<<endl;
        return;
    
}


int main()
{

ll b=1;

cin>>b;
while(b--)
{
    solve();
}
     
 
return 0;

}
 