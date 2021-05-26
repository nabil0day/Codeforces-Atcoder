
/*****                                            American International University Bangladesh (AIUB)                                                          
                                                              Hadiur Rahman Nabil
                                                                  Z3R0-DAY
                                                               
                                                          
*****/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 


int main() 
{
 ll n,count=0;
 cin>>n; 
 int arr[n];
 for (int i=0;i<n;i++)
 {
    cin>>arr[i];
     if(arr[i]==1)
     {
         count++;
     }
 }

 if(count==0)
 {
     cout<< "EASY";
 }
 else 
 {
     cout<< "HARD";
 }
 
 
        return 0;
  }

 