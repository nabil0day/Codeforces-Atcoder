/********************************************************************************************************************************************************************** 
                                                                                                                   
                                                          __Bismillahir Rahmanir Rahim__                                     
                                                American International University Bangladesh (AIUB)  
                                                              Hadiur Rahman Nabil                      
                                                                                                                 
                                                                                                                  
***********************************************************************************************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

typedef long int li;
typedef long long ll;
typedef long double ld;
typedef vector <int> vi;

#define pb push_back
#define mp make_pair
#define gcd(a,b) __gcd(a,b)
#define endl "\n"

const int MOD = 1e9 + 7;
const double PI = 3.1415926535897932384626;
const int mod_2 = 998244353;
const int MAX=100005;


void solve()
{
ll n;
cin>>n;
int v[n][5];
ll x= n/2;
for(int i=0;i<n;i++)
{
    for(int j=0;j<5;j++)
    cin>>v[i][j];    
}
for(int i=0;i<5;i++)
{
    for(int j=i+1;j<5;j++)
    {
    ll cnt1=0,cnt2=0,cnt3=0;
    
    for(int k=0;k<n;k++)
    {
        if(v[k][i]==1)
        
            cnt1++;
        
         if(v[k][j]==1)
         
             cnt2++;
         
         if(v[k][j]== 1 && (v[k][i]== 1))
         
             cnt3++;
         


    }
    cnt1=cnt1-cnt3;
    cnt2=cnt2-cnt3;
    ll y= cnt1+cnt2+cnt3;
    if(cnt1<=x && cnt2<=x && y==n)
    {
        cout<<"YES\n";
        return;
        
    }
    else{
        //nothing
    }

  
    }
}
cout<<"NO\n";

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