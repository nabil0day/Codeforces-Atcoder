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






int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    

ll t,r,b,d;
cin>> t;
while(t--)
{
  cin>>r>>b>>d;
  ll dif= abs(r-b);
  ll mn= min(r,b);
  ll nab = (dif+mn-1)/mn;

  if(nab<=d)
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
