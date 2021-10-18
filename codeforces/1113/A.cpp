#include <bits/stdc++.h>
using namespace std;
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define endl "\n"

int32_t main(){
    Fast;
    int t=1;
    // cin>>t;
    while(t--){
        int n , v;
        cin>>n>>v;
        int ans = v - 1;

        if(n-1<=v){
            cout<<n-1;
            return 0;
        }
        for(int i = 1; i <= n-v ;i++){
                ans += i;
        }
            cout<<ans;
            return 0;     
}

    return 0;
}