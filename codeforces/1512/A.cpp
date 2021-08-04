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
    
ll t,n,a[1000],flag=0,num=0,i;
cin>>t;
while(t--)
{
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(a[0]==a[1])
    {
        flag=a[0];
    }
    else
    {
        flag=a[2];
    }
    for(int i=0;i<n;i++)
    {
        if (a[i]!=flag)
        {
            num=i+1;
            break;
        }

        
    }
    cout<<num<<"\n";
}
    
    
return 0;
}
