/*****                                            
 *                                                   __Bismillahir Rahmanir Rahim__
 *                                          American International University Bangladesh (AIUB) 
 *                                                         Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define endl '\n'



int a[100][100];


    int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

   ll n;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       a[1][i]=1;
       a[i][1]=1;
   }
   for(int i=2;i<=n;i++)
   {
       for(int j=2;j<=n;j++)
       {
           a[i][j]=a[i-1][j]+a[i][j-1];
       }
   }
   cout<<a[n][n]<<"\n";
    
}




 

 


