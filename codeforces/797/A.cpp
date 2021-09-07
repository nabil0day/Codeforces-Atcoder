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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	ll n,k;
	cin>>n>>k;
	ll a[k],ami=0,tmi=0;
	if(k==1)
	{
		cout<<n<<"\n";
        return 0;
	}
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			n=n/i;
			ami++;
			a[ami-1]=i;
			if(ami==k-1)
			{
				if(n!=1)
				{
				a[ami]=n;
				tmi=1;
				}
				break;
				
			}
			i--;
			
		}
	}
	if(tmi==0)
	{
		cout<<"-1\n";
	}
	else
	{
		for(int i=0;i<k;i++)
		{
			cout<<a[i]<<" ";
		}
	}



 return 0;
 
}


/*

*/
