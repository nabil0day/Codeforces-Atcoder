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
 ll n,x;
 cin>>n;
 for(int k=2;k<n;k++)
 {
     int so = pow(2,k)-1;
     if(n%so)
     continue;
     x=n/so;
     break;
 }
 cout<<x<<"\n";
 

 

 
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
