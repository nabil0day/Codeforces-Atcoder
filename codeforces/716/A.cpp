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
const int N = 1e5+3;
ll a[N];
  
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
ll n,c,i;
ll count=0;   

cin>>n>>c;
for(int i=1;i<=n;i++)
{
  cin>>a[i];

}    

   
   for(int i=1;i<=n;i++)
   {
     if(i==0)
     {
       count++;
     }
   
   else{
     if(a[i]-a[i-1]<=c)
     {
     count++;
     }
     else
     {
        count=1;
     }
   }
   }
   cout<<count<<"\n";
   return 0;

}

        

        

    
 

    

    

  
    
    
    





 

 


