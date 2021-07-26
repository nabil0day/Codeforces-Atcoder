/*****                                            
                                                     __Bismillahir Rahmanir Rahim__
                                               American International University Bangladesh (AIUB) 
                                                          Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector <int> vi;

#define INF 1000000007

#define pb push_back
#define mp make_pair
#define endl "\n"

void solve()
{
     ll n,flag;
    cin>>n;

   ll a[n];
    
   for(int i=0;i<n;i++)
   cin>>a[i];
     
   sort(a,a+n);

  flag=0;
  for(int i=1;i<n;i++)
  {
     if(a[i]-a[i-1]>1)
     {
             flag=1;
             break;
     }
  }
     if(flag==0)
     {
             cout<<"Yes\n";
     }
     else
     {
             cout<<"No\n";
     }
  
}

 




int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

ll t;
cin>>t;
while(t--)
{
        solve();
}

return 0;


}
    

    






        

        

    
 

    

    

  
    
    
    





 

 


