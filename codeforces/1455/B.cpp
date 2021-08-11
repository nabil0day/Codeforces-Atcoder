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




void solve() {
   int n;
        cin >> n;
        int s = 0;
        int i = 1, x = 0;
        while (s < n)
        {
            s = s + i;
            i++;
            x++;
        }
        if (s == n)
        {
            cout << x << "\n";
        }
        else
        {
            int d = s - n;
            if (d == 1)
            {
                cout << x + 1 << "\n";
            }
            else
            {
                cout << x << "\n";
            }
        }
 
} 


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

ll t;
cin>>t;
while(t--)
{
    solve();
}
return 0;
}
