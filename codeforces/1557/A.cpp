/*****                                            
                                                     __Bismillahir Rahmanir Rahim__
                                               American International University Bangladesh (AIUB) 
                                                          Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef   vector<ll>  vi;


#define pb push_back
#define pf push_front
#define mp make_pair
#define gcd(a,b) __gcd(a,b)
#define endl "\n"

const int mod = 1e9 + 7;
const double pi = 3.1415926535897932384626;
const int MAX=100005;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


ll t;
cin>>t;
while(t--)
 {
		ll n;
		cin>>n;
		ll arr[n];
        
		for(int i = 0; i < n; i++)
        {
			cin>>arr[i];
        }
        sort(arr,arr+n);
        ll cnt=0;
        for(int i =0;i<n-1;i++)
        {
            cnt+=arr[i];
        }
        long double a =(long double)cnt/(n-1);
        long double sol = a+arr[n-1];
		
        
		cout<<fixed <<setprecision(9)<<sol<<"\n";
	}

return 0;
}
