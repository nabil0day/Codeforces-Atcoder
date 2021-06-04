/*****                                            
 *                                                   __Bismillahir Rahmanir Rahim__
 *                                          American International University Bangladesh (AIUB) 
 *                                                         Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 



int main()
{



    ll t;
    cin>>t;
    while(t--)
    {
      ll arr[4];
      ll a,b,c,d;
      cin>>a>>b>>c>>d;
      arr[0]=a;
      arr[1]=b;
      arr[2]=c;
      arr[3]=d;
      sort(arr,arr+4);
      if((arr[3]==c || arr[3]==d) && (arr[2]==a || arr[2]==b))
        {
          cout<<"YES\n";
        }
    
 else if((arr[3]==a || arr[3]==b) && (arr[2]==c || arr[2]==d))
  {
    cout<<"YES\n";
  }
  else{
    cout<<"NO\n";
  }
    }
 



}
 