/********************************************************************************************************************************************************************** 
                                                                                                                   
                                                          __Bismillahir Rahmanir Rahim__                                     
                                                American International University Bangladesh (AIUB)  
                                                              Hadiur Rahman Nabil                      
                                                                                                                 
                                                                                                                  
***********************************************************************************************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

typedef long int li;
typedef long long ll;
typedef long double ld;
typedef vector <int> vi;

#define pb push_back
#define mp make_pair
#define gcd(a,b) __gcd(a,b)
#define endl "\n"


const int mod = 1e5 + 10;
const double PI = 3.1415926535897932384626;
const int mod_2 = 998244353;
const int MAX=100005;

/**********************************************************************************************************************************************************************/

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif

    int n,m;
    cin>>n>>m;
    if(m%n!=0)
        cout<<-1;
    else
    {
        int x=m/n;
        int c=0;
        while(x%2==0)
        {
            x/=2;
            c++;
        }
        while(x%3==0)
        {
            x/=3;
            c++;
        }
        if(x==1)
            cout<<c;
        else
            cout<<-1;
    }

}



/*
120 51840
7
*/
