#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a , b ;
    cin>>a>>b;
    int t = abs(a-b) / 2 ;
    cout<<min(a,b)<<" "<<t<<endl;
    return 0;
}