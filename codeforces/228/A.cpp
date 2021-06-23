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
   int a[100];
   int b=0;
   cin>>a[0]>>a[1]>>a[2]>>a[3];
   sort(a,a+4);
   for(int i =0;i<3;i++)
   {
       if(a[i]==a[i+1])
       {
           b++;
       }
       
   }
     cout<<b<<"\n";
  
return 0;

}
 