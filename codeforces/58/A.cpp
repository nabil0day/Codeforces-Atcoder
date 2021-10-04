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

const int mod = 1e5 + 10;
const double PI = 3.1415926535897932384626;
const int mod_2 = 998244353;
const int MAX=100005;

int a[mod];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif

    string s;
    cin>>s;
    ll l=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='h' && l==0)
        l++;
        else if(s[i]=='e' && l==1)
        l++;
        else if(s[i]=='l' && l==2)
        l++;
        else if(s[i]=='l' && l==3)
        l++;
        else if(s[i]=='o' && l==4)
        l++;
        if(l==5)
        break;
    }
    if(l==5)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

           
          

        
    


	return 0;
}



/*

*/
