
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
 
 for(int i=0;i<n;i++)
 {
     
     cin>>arr[i];
 }

 ll max=arr[0];
 ll min=arr[0];
 for(int i=0;i<n;i++){

 if(arr[i]>max)
 {
    max=arr[i];

     count++;
 }
 if(arr[i]<min)
 {
     min=arr[i];
     count++;
 }
 }
 cout<<count;



        return 0;
  }

 