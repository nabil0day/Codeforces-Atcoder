#include <bits/stdc++.h>
using namespace std;
 
 
  int main()
{
    int n,k;
    int a[100];
    cin>>n;
    cin>>k;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int count=0;
 
    for(int i=0; i<n; i++)
    {
        if(a[i]>=a[k-1] && a[i])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
 