#include <bits/stdc++.h>
using namespace std;
const int N =3e5 +5;
int v[N];
void solve(){
       int a,b;
       cin>>a>>b;
       int res = v[a];
       if(res==b){
           cout<<a<<endl;
       }
       else if((res^b)==a){
           cout<<a+2<<endl;
       }
       else{
           cout<<a+1<<endl;
       }
}

int main(){
    for(int i = 1 ; i < N ; i++){
         v[i]=v[i-1]^(i-1);
    }
    int t;
    cin>>t;
    while(t--){
        solve();

}

 
    return 0;
}