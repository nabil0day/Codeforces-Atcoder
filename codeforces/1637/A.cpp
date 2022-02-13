/**************************************
                                      *
 * Author: Hadiur Rahman Nabil        *
                                      *
**************************************/
#include <bits/stdc++.h>
using namespace std;

typedef long int      li;
typedef long long     ll;
typedef long double   ld;
typedef vector <int>  vi;
typedef vector<ll>    vl;
typedef pair<int,int> pi;
typedef pair<ll,ll>   pll;

#define FAST          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb            push_back
#define mp            make_pair
#define gcd(a,b)      __gcd(a,b)
#define FOR(i,n)      for(int i=0;i<n;i++)
#define rep(i,k,n)    for(int i=k; i<n; i++)
#define repp(i,k,n)   for(int i=k; i<=n; i++)6
#define endl          "\n"


const int             mod=1e5 + 10;
const double          PI=3.1415926535897932384626;
const int             mod_2 = 998244353;
const int             MAX=100005;
const double          PII=2.0*acos(0.0);


/************************************************************************************************************************************************/


int main()
{
    FAST;
    #ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif
  
  ll t;
  cin>>t;
  while(t--)
  {
  ll n;
  cin>>n;
  vector<ll>v(n);
  for(int i=0;i<n;i++)
  cin>>v[i];
  if(is_sorted(v.begin(),v.end()))
  {
    cout<<"NO\n";
  }
  else{
    cout<<"YES\n";
  }
  }
  return 0;
}