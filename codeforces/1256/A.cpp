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
       int a , b, n, s;
       cin>>a>>b>>n>>s;

       if(a*n + b >= s && s%n <=b){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }

}

 
    return 0;
}