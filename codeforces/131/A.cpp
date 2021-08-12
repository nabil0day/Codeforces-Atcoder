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
    

ll c=0,d=0;
    string s;
    cin>>s;
    for(int i=1; i<s.size(); i++)
    {
        if(islower(s[i]))
        {
            c++;
        }
    }
    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            d++;
        }
    }
    if(islower(s[0]) && c==0)
    {
        s[0]=toupper(s[0]);
        for(int i=1; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
 
        cout<<s;
        return 0;
    }
    if(d==s.size())
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=towlower(s[i]);
        }
        cout<<s;
    }
    else
    {
        cout<<s;
    }
 

}