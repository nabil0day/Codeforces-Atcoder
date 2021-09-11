/********************************************************************************************************************************************************************** 
                                                                                                                   
                                                          __Bismillahir Rahmanir Rahim__                                     
                                                American International University Bangladesh (AIUB)  
                                                              Hadiur Rahman Nabil                      
                                                                                                                 
                                                                                                                  
***********************************************************************************************************************************************************************/
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
		cin>>n;
		string s;
		cin>>s;
		int d = 0;
		int c = 0;
		int r = 0;
		int l = 0;
		for(int i = 0; i < n; i++){
			if(s[i] == 'a') c++;
			else d++;
		}
		if(c == n || d == n) cout<<-1<<" "<<-1;
		else{
			for(int i = 0; i < n-1; i++){
				if(s[i] == 'a' && s[i+1] == 'b'){
					r = i+1;
					l = i;
					break;
				}
				if(s[i] == 'b' && s[i+1] == 'a'){
					r = i+1;
					l = i;
					break;
				}
			}
			cout<<l+1<<" "<<r+1;
		}
		cout<<endl;
	
 
}
    


   
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif

    
    

 ll t;
 cin>>t;
 while(t--)
 {
     solve();
 }
    
  return 0;
}