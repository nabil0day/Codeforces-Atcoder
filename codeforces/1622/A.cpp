/********************************************************************************************************************************************************************** 
                                                                                                                   
                                                          __Bismillahir Rahmanir Rahim__                                     
                                                American International University Bangladesh (AIUB)  
                                                              Hadiur Rahman Nabil                      
                                                                                                                 
                                                                                                                  
***********************************************************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

typedef long int      li;
typedef long long     ll;
typedef long double   ld;
typedef vector <int>  vi;
typedef vector<ll>    vl;
typedef pair<int,int> pi;
typedef pair<ll,ll>   pll;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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


/**********************************************************************************************************************************************************************/

void solve()
{
  vector<ll>v(3);
  for(int i=0;i<3;i++)
  cin>>v[i];

  sort(v.begin(),v.end());

  if(v[0]+v[1]== v[2] || v[0]+v[2]==v[1] || v[1]+v[2]==v[0])
  {
    cout<<"YES\n";
  }
  else if((v[0]==v[1] and v[2]%2==0) || (v[1]==v[2] and v[0]%2==0) || (v[0]==v[2] and v[1]%2==0))
  {
    cout<<"YES\n";
  }
  else{
    cout<<"NO\n";
  }
  

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif


    int t;
    cin>>t;
    while(t--)
    {
      solve();
     
    } 
   
  return 0;
}
