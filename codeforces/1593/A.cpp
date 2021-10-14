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
       int a, b, c;
       cin>>a>>b>>c;

    //    int maxm = max(a,(b,c));
       cout<<max(0LL,1+max(b,c)-a) <<" "<<max(0LL,1+max(a,c)-b)<<" "<<max(0LL,1+max(b,a)-c)<<endl;
       
       

}

    return 0;
}