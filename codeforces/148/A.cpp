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
    
    
ll t,k,l,m,n,d,count=0;



cin>>k>>l>>m>>n>>d;


    for(int i =1;i<=d;i++)
    {
       if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
       {
           count++;
       } 
    }

cout<<count<<"\n";


    
    return 0;
}
