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
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int x=k*l;
    int y=x/nl;
    int z=c*d;
    int a=p/np;
    int ans = min(y,min(a,z))/n;

    cout<<ans<<endl;
    
    
    
    
    return 0;
} 

 

 


