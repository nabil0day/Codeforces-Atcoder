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
  ll a,b;
  cin>>a;
  b=a/2;
  if(a%2==1)
  {
      cout<<b<<endl;
      for(int i=0;i<b-1;i++)
      cout<<"2"<<" ";
      cout<<"3";
  }
  else{
      cout<<b<<endl;
      for(int j=0;j<b-1;j++)
      cout<<"2"<<" ";
      cout<<"2";
  }
  return 0;
}

 

 


