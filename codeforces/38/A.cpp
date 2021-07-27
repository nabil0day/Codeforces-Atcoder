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

ll n,a,b;
ll d[10000];
ll sum=0;
cin>>n;
for(int i = 0;i<n-1;i++)
{
        cin>>d[i];
}
cin>>a>>b;
for(int i=a-1;i<b-1;i++)
{
        sum=sum+d[i];
}
cout<<sum<<"\n";

return 0;


}
    

    






        

        

    
 

    

    

  
    
    
    





 

 


