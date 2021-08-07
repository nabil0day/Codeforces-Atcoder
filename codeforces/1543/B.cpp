/*****                                            
                                                     __Bismillahir Rahmanir Rahim__
                                               American International University Bangladesh (AIUB) 
                                                          Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef   vector<ll>  vi;


#define pb push_back
#define pf push_front
#define mp make_pair
#define gcd(a,b) __gcd(a,b)
#define endl "\n"

const int mod = 1e9 + 7;
const double pi = 3.1415926535897932384626;
const int MAX=100005;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    ll t,n,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
       
        ll s=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            s+=a;
        }
        ll k=s%n;
        ll sol =k*(n-k);
        cout<<sol<<"\n";
    }


return 0;
}
