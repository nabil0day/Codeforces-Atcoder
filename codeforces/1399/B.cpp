#include <bits/stdc++.h>
using namespace std;
#define SIZE 1000000
int main(){
    int t;
    cin>>t;
    while(t--){
       long long  int n ,count = 0;
        cin>>n;
        vector<int> a(n) ,b(n);
        
        for(int i = 0 ; i < n ; i++)
            cin>>a[i]; 
        for(int i = 0 ; i < n ; i++)
            cin>>b[i]; 
            
        int minm = *min_element(a.begin(),a.end());
        int minn = *min_element(b.begin(),b.end());
        for(int i = 0 ; i < n ; i++){
            count += max(a[i] - minm , b[i] - minn); 
        }
        cout<<count<<endl;
    }
 
 
    return 0;
}
