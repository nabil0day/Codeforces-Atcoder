#include <bits/stdc++.h>
using namespace std;
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define endl "\n"

int32_t main(){
    Fast;
    int t;
    cin>>t;
    while(t--){
   
       int n;
       cin>>n;
 
       int flag=0;
        
        for(int i=1;i*i*i<n;i++)
        {
            int x=i*i*i;
 
            int y=n-x;
 
            int z=cbrt(y);
 
            if((z*z*z)==y)
              {
                  flag=1;
                  break;
              }
        }
        if(flag)
          cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
    }
    return 0;
}