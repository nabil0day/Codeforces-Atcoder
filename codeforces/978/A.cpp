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
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif


ll n=0,count=0;
cin>>n;
vector<ll>v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(v[i]==v[j])
        {
            v[i]=0;
            count++;
        }
    }
}
ll mainSize=v.size()-count;
cout<<mainSize<<"\n";
for(int i=0;i<n;i++)
{
    if(v[i]!=0)
    cout<<v[i]<<" ";
}


   return 0;
 
}


/*

*/
