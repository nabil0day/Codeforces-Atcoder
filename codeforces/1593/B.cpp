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
       string s;
       cin>>s;

       int minm = s.length();
       int n = s.length();
       for(int i = s.length()-1 ; i>=0 ; i--){
           if(s[i]=='5'){
               for(int j = i-1 ; j>= 0 ;j--){
                   if(s[j]=='2' || s[j] =='7')
                   minm = min(minm,n-j-2);
               }
           }
           if(s[i]=='0'){
               for(int j=i-1 ; j>= 0 ;j--){
                   if(s[j]=='0' || s[j]=='5')
                   minm = min(minm,n-j-2);
               }
           }

       }
       cout<<minm<<endl;

}

 
    return 0;
}