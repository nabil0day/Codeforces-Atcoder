#include<bits/stdc++.h>
using namespace std;
int main()
{
  using ll = long long;
    int n;
    cin>>n;
    int a[n];
    long long b[200]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]=a[i]%200;
        b[a[i]]++;
    }
    long long int ans=0;
    for(int i=0;i<200;i++)
    {
        ans=ans+(b[i]*(b[i]-1))/2;
    }
    cout<<ans<<endl;
 
    return 0;
}