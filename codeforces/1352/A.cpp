/********************************************************************************************************************************************************************** 
                                                                                                                   
                                                          __Bismillahir Rahmanir Rahim__                                     
                                                American International University Bangladesh (AIUB)  
                                                              Hadiur Rahman Nabil                      
                                                                                                                 
                                                                                                                  
***********************************************************************************************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector <int> vi;

#define pb push_back
#define mp make_pair
#define gcd(a,b) __gcd(a,b)
#define endl "\n"

const int mod = 1e9 + 7;
const double PI = 3.1415926535897932384626;
const int mod_2 = 998244353;
const int MAX=100005;


void solve()
{
vector<ll>vi;
ll n,count=0,sol=0;
cin>>n;
if(n%10!=0)
{
    vi.pb(n%10);
}
sol = n%10;
n-=sol;
if(n%100!=0)
{
    vi.pb(n%100);
}
sol=n%100;
n-=sol;
if(n%1000!=0)
{
     vi.pb(n%1000);
}
sol=n%1000;
n-=sol;

if(n%10000!=0)
{
      vi.pb(n%10000);
}
if(n>=10000 && n%10000==0)
{
      vi.pb(n);
}

cout<<vi.size()<<"\n";
 
for(int i=0; i<vi.size(); i++)
{
      cout<<vi[i]<<" ";
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

    
    

 ll t;
 cin>>t;
 while(t--)
 {
     solve();
 }
    
  return 0;
}