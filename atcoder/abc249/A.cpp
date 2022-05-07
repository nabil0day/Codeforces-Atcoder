/**************************************
                                      *
 * Author: Hadiur Rahman Nabil        *
                                      *
**************************************/
#include <bits/stdc++.h>
using namespace std;

typedef long int      li;
typedef long long     ll;
typedef long double   ld;
typedef vector <int>  vi;
typedef vector<ll>    vl;
typedef pair<int,int> pi;
typedef pair<ll,ll>   pll;

#define FAST          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb            push_back
#define mp            make_pair
#define gcd(a,b)      __gcd(a,b)
#define FOR(i,n)      for(int i=0;i<n;i++)
#define rep(i,k,n)    for(int i=k; i<n; i++)
#define repp(i,k,n)   for(int i=k; i<=n; i++)6
#define endl          "\n"


const int             mod=1e5 + 10;
const double          PI=3.1415926535897932384626;
const int             mod_2 = 998244353;
const int             MAX=100005;
const double          PII=2.0*acos(0.0);


/************************************************************************************************************************************************/


int main()
{
    FAST;
    #ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif 
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    int takahashi = 0, aoki = 0;
    for (int k = 0; k < x; ++k) {
        if (k % (a + c) < a) {
            takahashi += b;
        }
        if (k % (d + f) < d) {
            aoki += e;
        }
    }
    if (takahashi > aoki) {
        cout << "Takahashi\n";
    } else if (takahashi < aoki) {
        cout << "Aoki\n";
    } else {
        cout << "Draw\n";
    }

}