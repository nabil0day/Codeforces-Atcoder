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
    ll t,n;
    cin>>t; 
    while(t--)
    {
        cin>>n;
        if((n/2)%2 !=0)
        {
            cout<<"NO\n";
            continue;
        }
        else{
        cout<<"YES\n";
        for(int i=1;i<=n/2;i++)
        {
            cout<<2*i<<" ";
        }
        for(int i=1;i<n/2;i++)
        {
            cout<<2*i-1<<" ";
        }
        cout<< n/2 + n-1<<"\n";
        }
        

    }
    return 0;
}
