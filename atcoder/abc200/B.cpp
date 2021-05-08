#include <bits/stdc++.h>
using namespace std;
 

 
int main()
{
    using ll = long long;
     ll N,K;
    cin >> N >> K;
    for (int i=0;i<K;i++)
    {
        if (N%200==0)  N/=200;
        
        else N=N*1000+200;
        
    }
    cout << N;

    
    return 0;
}