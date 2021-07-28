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

ll n,m,cnt=0;
int arr[16]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
cin>>n>>m;
for(int i=0;i<15;i++)
{
  if(n==arr[i] && m==arr[i+1])
  {
          cnt++;
          break;
  }
}
if(cnt==0)
{
        cout<<"NO";
}
else{
        cout<<"YES";
}

return 0;


}
    

    






        

        

    
 

    

    

  
    
    
    





 

 


