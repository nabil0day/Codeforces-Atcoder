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

        

    int one = 0 , two = 0 , three = 0 , four = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] == 1)one ++;
        if (a[i] == 2)two ++;
        if (a[i] == 3)three ++;
        if (a[i] == 4)four ++;
	}
	cout << four + three + (two * 2 + max(one - three , 0) + 3) / 4;
	return 0;
}



/*

*/