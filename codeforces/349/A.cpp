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

ll n;
ll arr[MAX];
ll change=0,chng25=0,chng50=0,flag=0;
    cin >> n;
    for(int i=0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n ; i++)
    {
        if(arr[i] == 25)
        {
            chng25++;
        }
        else if(arr[i] == 50)
        {
            if(chng25 < 1)
            {
                flag = -1;
                break;
            }
            else
            {
                chng25--;
                chng50++;
            }
        }
        else
        {
            if(chng25 > 0 && chng50 > 0)
            {
                chng25--;
                chng50--;
            }
            else if(chng25 >= 3)
            {
                chng25 -= 3;
            }
            else
            {
               flag = -1;
                break;
            }
        }
    }
    if(flag == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}


/*

*/
