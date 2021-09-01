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



void solve()
{
int n;
        cin >> n;
        char ch[n][n];
        for (int iii = 0; iii < n; iii++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> ch[iii][j];
            }
        }
        int i1, j1, i2, j2, flag = 1;
        for (int io = 0; io < n; io++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ch[io][j] == '*')
                {
                    if (flag == 1)
                    {
                        i1 = io;
                        j1 = j;
                        flag = 2;
                    }
                    else
                    {
                        i2 = io;
                        j2 = j;
                    }
                }
            }
        }
 
        if (i1 == i2 && (i1 != (n - 1)))
        {
            ch[i1 + 1][j1] = '*';
            ch[i2 + 1][j2] = '*';
        }
        else if (i1 == i2)
        {
            ch[i1 - 1][j1] = '*';
            ch[i2 - 1][j2] = '*';
        }
        else if (j1 == j2 && j1 != 0)
        {
            ch[i1][j1 - 1] = '*';
            ch[i2][j2 - 1] = '*';
        }
        else if (j1 == j2)
        {
            ch[i1][j1 + 1] = '*';
            ch[i2][j2 + 1] = '*';
        }
        
        else
        {
            ch[i1][j2] = '*';
            ch[i2][j1] = '*';
        }
 
        for (int ik = 0; ik < n; ik++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << ch[ik][j] << "";
            }
            cout << endl;
        }
    }
   




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
     solve();
 }
    
  return 0;
}