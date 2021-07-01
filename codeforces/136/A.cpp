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
   int n,i;
   cin>>n;
   int arr[n];
   int arr_gift[n];
   for( i=1;i<=n;i++)
   {
       cin>>arr[i];
       arr_gift[arr[i]] =i;
   }
   for(i=1;i<=n;i++)
   {
       cout<<arr_gift[i]<<" "<<endl;
   }
   return 0;

}

 

 


