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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll eof=0,count=0;
        for(int i=0;i<s.length();i++)
        {
            if (s[i]=='1')
            break;
            eof++;
        }
        for(int i= s.length()-1;i>=0;i--)
        {
            if(s[i]=='0')
            
                break;
            count++;
        }

        if(eof+count==n)
        {
            cout<<s<<"\n";
            continue;
           
        }
        eof++;
        while(eof--)
        {
            cout<<0;
        }
        while(count--)
        {
            cout<<1;
        }
        cout<<"\n";
        
    }

 
  
  return 0;
}