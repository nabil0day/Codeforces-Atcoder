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
       int n , t;
       cin>>n>>t;

       string s = to_string(t);

       if(s.length() > n){
           cout<<"-1"<<endl;
           return 0;
       }
       cout<<t;
       n -= s.length();

       while(n--){
           cout<<0;
       }
       cout<<endl;
       return 0;

}

 
    return 0;
}