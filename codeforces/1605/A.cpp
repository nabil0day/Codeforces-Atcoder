/********************************************************************************************************************************************************************** 
                                                                                                                   
                                                          __Bismillahir Rahmanir Rahim__                                     
                                                American International University Bangladesh (AIUB)  
                                                              Hadiur Rahman Nabil                      
                                                                                                                 
                                                                                                                  
***********************************************************************************************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

typedef long int li;
typedef long long ll;
typedef long double ld;
typedef vector <int> vi;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define mp make_pair
#define gcd(a,b) __gcd(a,b)
#define endl "\n"


const int mod = 1e5 + 10;
const double PI = 3.1415926535897932384626;
const int mod_2 = 998244353;
const int MAX=100005;


/**********************************************************************************************************************************************************************/



void solve()
{
ll a,b,c;
cin>>a>>b>>c;
ll x =(a+b+c);
if(x%3==0)
{
  cout<<"0\n";
}
else{
  cout<<"1\n";
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