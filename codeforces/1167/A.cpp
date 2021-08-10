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



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


ll n,a,c,sum=0,ans;
string b;
cin>>n;
for(int i=1;i<=n;i++)
{
    cin>>a;
    cin>>b;

     ll x = b.find('8',0);
     if(x+10<b.length() && x>=0)
     {
         cout<<"YES\n";
     }
     else
     {
         cout<<"NO\n";
     }
    
}
return 0;
}
