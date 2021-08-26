#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    vector<int> a(n);
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=(i+1);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            ans+=1;
        }
    }
    if(ans>=1){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
    return(0);
}