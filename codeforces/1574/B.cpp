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
ll a,b,c,m;
cin>>a>>b>>c>>m;

//ll x= a/2; 
//ll y= b/2; 
//ll z = c/2;

 
ll arr[3];
arr[0]=a;
arr[1]=b;
arr[2]=c;
sort(arr,arr+3);
ll x= a-1; 
ll y= b-1; 
ll z = c-1;
ll ami = x+y+z;

if(m>ami)
{
  cout<<"NO\n";
}
else
{
  ll k =(arr[1]+arr[0]+1);
  ll l=arr[2]-k;
  if(m>=l)
  {
      cout<<"YES\n";
  }
  else
  {
      cout<<"NO\n";
  }
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