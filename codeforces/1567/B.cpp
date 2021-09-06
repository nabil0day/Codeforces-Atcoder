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

const int N =3e5 +5;
int v[N];
void solve()
{
 ll a,b;
       cin>>a>>b;
       ll res = v[a];
       if(res==b){
           cout<<a<<endl;
       }
       else if((res^b)==a){
           cout<<a+2<<endl;
       }
       else{
           cout<<a+1<<endl;
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

    for(int i = 1 ; i < N ; i++){
         v[i]=v[i-1]^(i-1);
    }

 ll t;
 cin>>t;
 while(t--)
 {
     solve();
 }
    
  return 0;
}