#include<bits/stdc++.h>

using namespace std;
int main()
{
int t;
cin>>t;
 while(t--){
       long long  int n ,r;
        cin>>n;
        long long int a[n];
        for(int i = 0 ; i < n ; i++){
            cin>>a[i];
        }
         long long int maxm =INT_MIN ;
        for(int i = 0 ; i < n-1 ; i++){
        r = max(a[i],a[i+1]) * min(a[i],a[i+1]);
        maxm = max(maxm,r);
        }
        cout<<maxm<<endl;
    }
 
return 0;
}