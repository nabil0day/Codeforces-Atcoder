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
       ll n;
       cin>>n;
        
        vector<int> v(n);
        for(int i = 0 ; i < n ; i++){
            cin>>v[i];
        }
        list<int>lis ;
        for(int  i = 0 ; i < n ; i++){
            if(i==0){
                lis.push_front(v[i]);
            }
            if(lis.front()>=v[i]){
                lis.push_front(v[i]);
            }
            else{
                lis.push_back(v[i]);
            }
        }
        lis.unique();
        for(auto it : lis){
            cout<<it<<" ";
        }
        cout<<"\n";
 
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