/***************************************************************************************************************************************************  
                                                                                                                   
                                                          __Bismillahir Rahmanir Rahim__                                     
                                                American International University Bangladesh (AIUB)  
                                                              Hadiur Rahman Nabil                      
                                                                                                                 
                                                                                                                  
******************************************************************************************************************************************************/
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
  ll n;
  cin>>n;
  vector<ll>a;
  for(int i=0;i<n;i++)
  {
      ll x;
      cin>>x;
      if(x%2)
      a.push_back(x);

  }
  ll y= a.size(), sol= n*(n-1)/2;

     for(int i=0;i<y;i++)
     
         for(int j=i+1;j<y;j++)
     
             if(gcd(a[i],a[j])==1)
        
                 sol--;
        
    cout<<sol<<"\n";
     

  
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