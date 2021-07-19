#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       long long int n , count = 0;
        cin>>n;
        while(n>0){
            if((n%10) > count)
                count = n % 10 ;
                n = n / 10 ;
        }
            cout<<count<<endl;
    }
    return 0;
}