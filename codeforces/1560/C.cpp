/*****                                            
                                                     __Bismillahir Rahmanir Rahim__
                                               American International University Bangladesh (AIUB) 
                                                          Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef   vector<ll>  vi;


#define pb push_back
#define pf push_front
#define mp make_pair
#define gcd(a,b) __gcd(a,b)
#define endl "\n"

const int mod = 1e9 + 7;
const double pi = 3.1415926535897932384626;
const int MAX=100005;




void solve()
{
ll n;
cin>>n;
ll ans = ceil(sqrt(n));
ll res = sqrt(n);
res= res*res;
ll result = ans*ans;

if(n-res==0)
{
    cout<< ans <<" "<< 1<<"\n";
}
else if(n-res<=ans)
{
    cout<<n-res<<" "<<ans<<"\n";
}
else
{
    cout<<ans<<" "<<result-n+1<<"\n";
}
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

ll t;
cin>>t;
while(t--)
{
    solve();
}
return 0;
}
