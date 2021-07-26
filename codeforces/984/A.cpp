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



  
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);



ll n,a[10000];
cin>>n;

for(int i=0;i<n;i++)
{
        cin>>a[i];
        
}
sort(a,a+n);
cout<<a[(n-1)/2]<<"\n";

return 0;


}
    

    






        

        

    
 

    

    

  
    
    
    





 

 


