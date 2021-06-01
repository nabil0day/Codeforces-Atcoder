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
  int a,b;
  cin>>a>>b;
  if(a==1) a+=13;
  if(b==1) b+=13;
  
  if(a>b)
  {
    cout<< "Alice \n";
  }
  else if(a<b)
  {
    cout<< "Bob \n";
  }
  else
  {
    cout<<"Draw \n";
  }

}
 