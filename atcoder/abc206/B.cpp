#include <bits/stdc++.h>
 
using namespace std;
int main()
{
 long long n,sum=0,count=0,i;
 cin>>n;
 for(i=0;i<n;i++)
 {
     sum+=i;
     if(sum<n)
     {
       count++;
     }
 }
 cout<<count;
 
  return 0;
 
    
}