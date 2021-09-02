/*****                                            
                                                     __Bismillahir Rahmanir Rahim__
                                               American International University Bangladesh (AIUB) 
                                                          Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
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



ll a[11];
string s="codeforces";

bool isvalid(ll k)
{
  ll ans=1;
  for(int i=1;i<=10;i++)
  {
    ans*=a[i];
  }
  return ans>=k;
}

void solve()
{
  ll k;
  cin>>k;
  ll i=0;
  for(;;)
  {
    ++i;

    if(i>10) i=1;
    a[i]++;

    if(isvalid(k))
    break;
  }
  
  for(int i=1;i<=10;i++)
  {
    while(a[i]--)
    {
      cout<<s[i-1];
    }
  }
  cout<<"\n";
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

 ll t=1;
 //cin>>t;
 while(t--)
 {
     solve();
 }
    
  return 0;
}