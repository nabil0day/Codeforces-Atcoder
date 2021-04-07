#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,S,q;
    cin>>T>>S>>q;
    int count=0;
    while(S<T)
    {
        S*=q;
        count++;
    }
    cout<<count<<endl;
 
    return 0;
}