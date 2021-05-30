/*****                                            American International University Bangladesh (AIUB)                                                          
                                                              Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
 
 
int main()
{
   int n,t;
   int police=0,crime=0;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       cin>>n;
       if(n>0)
       {
           police=police+n;
       }
       else if(n<0)
       {
           if(police>0)
           {
               police--;
           }
           else
           {
               crime++;
           }
       }

   }

   cout<<crime<<endl;
  }
 