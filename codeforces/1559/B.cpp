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



void solve()
{
  ll n;
  string s;
  cin>>n>>s;

if(n==1 && s=="?")
{
    cout<<'B'<<endl;
    return;
}
  for(int i=0;i<n;i++){
    if(s[i]!='?'){
      char gg=(s[i]=='B'?'R':'B');
      if(s[i+1]=='?' && i<n) s[i+1]=gg;
    }
  }
  for(int i=n-1;i>=0;--i){
    if(s[i]=='?'){
     char gg=(s[i+1]=='B'?'R':'B');
     s[i]=gg;
    }
  }cout<<s<<endl;
 
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