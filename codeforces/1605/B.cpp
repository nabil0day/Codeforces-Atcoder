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


const int mod = 1e5 + 10;
const double PI = 3.1415926535897932384626;
const int mod_2 = 998244353;
const int MAX=100005;

/**********************************************************************************************************************************************************************/

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
ll n;
string s;
cin>>n>>s;
string str =s;
sort(str.begin(),str.end());
if(s==str)
{
  cout<<"0\n";
  continue;
}
cout<<"1\n";
vector<int>vi;
for(int i=0;i<str.size();i++)
{
  if(str[i]!=s[i])
  vi.push_back(i+1);
}
cout<<vi.size()<<" ";
for(int i=0;i<vi.size();i++)
cout<<vi[i]<<" ";
cout<<"\n";

}

    
   return 0;


}



/*
*/
