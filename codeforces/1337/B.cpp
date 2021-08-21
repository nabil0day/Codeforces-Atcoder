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

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

 ll t;
 cin>>t;
 while(t--)
 {

       int x,n,m;
       cin>>x>>n>>m;
 
       while(x>20 && n>0){
               x = (x/2)+10;
               n--;
           }
        while(x>0 && m>0){
                   x = x - 10 ;
                   m--;
               }
       if(x<=0){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
 
}

    
}