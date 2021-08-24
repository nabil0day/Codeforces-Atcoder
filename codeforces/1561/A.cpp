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
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll count = 0;
        while(true)
        {
            bool sort = true;
            for(int i=0;i<n;i++)
            {
                if(a[i]!=i+1)
                {
                    sort = false;
                }
            }
            if(sort)
            {
                break;
            }
            if((count+1)%2==0)
            {
                for(int i=1;i<=n-2;i+=2)
                {
                    if(a[i]>a[i+1])
                    {
                        ll temp = a[i];
                        a[i] = a[i+1];
                        a[i+1] = temp;
                    }
                }
            }
            else
            {
                for(int i=0;i<=n-3;i+=2)
                {
                    if(a[i]>a[i+1])
                    {
                        ll temp = a[i];
                        a[i] = a[i+1];
                        a[i+1] = temp;
                    }
                }
            }
            count++;
        }
        cout<<count<<endl;
    }



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

 ll t=1;
 cin>>t;
 while(t--)
 {
     solve();
 }
    
  return 0;
}