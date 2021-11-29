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

    string s,str="qwertyuiopasdfghjkl;zxcvbnm,./";
    char x;
    cin>>x>>s;
    for(int i=0;i<(int)s.length();i++)
    {
        for(int j=0;j<(int)str.length();j++)
        {
            if(s[i]==str[j])
            {
                if(x=='R')
                {
                    s[i]=str[j-1];
                }
                else
                {
                    s[i]=str[j+1];
                }
                break;
            }
        }
        
    }
    cout<<s<<"\n";



}



/*
*/
