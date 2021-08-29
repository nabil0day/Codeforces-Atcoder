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
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        ll aans = (x+y)*a;
        
        ll bans1=abs(x-y);
        bans1=bans1*a;
        ll bans2=min(x,y);
        ll bans = (bans2*b) + bans1;
        
        if(aans<bans) cout<<aans<<endl;
        else cout<<bans<<endl;
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