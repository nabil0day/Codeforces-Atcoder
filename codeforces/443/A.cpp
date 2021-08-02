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
    
int count=0; 
string s;
getline(cin,s);
//cout<<

sort(s.begin(),s.end());
//cout<<s;
for(int i=0;i<s.size();i++)
{
    if(s[i]=='{'|| s[i]=='}' || s[i]==','|| s[i]==' ')
    {
        continue;
    }
    else
    {
        if(s[i]!=s[i+1])
        {
            count++;
        }
    }
}
cout<<count<<"\n"; 
    return 0;
}
