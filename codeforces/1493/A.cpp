#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    
    ll t;
    cin>>t;
    while(t--){
        ll n,k; 
        cin>>n>>k;
        ll ans=0;
        ll a[n], j=0;
        for(int i=n; i>=1; i--){
            if(i==k) continue;
            
            if(i>k){
                ans++;
                a[j]=i;
                j++;
            }
            else{
                int flag=0;
                for(int z=0; z<ans; z++){
                    if(a[z]+i == k){
                        flag=1;
                        break;
                    }
                }
                
                if(flag==0){
                    ans++;
                    a[j]=i;
                    j++;
                }
            }
        }
        
        cout<<ans<<"\n";
        for(int l=0; l<ans; l++) cout<<a[l]<<" ";
        cout<<"\n";
    }
    
    return 0;
}
