/*****                                            
 *                                                   __Bismillahir Rahmanir Rahim__
 *                                          American International University Bangladesh (AIUB) 
 *                                                         Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>
using namespace std;


 



int main()
{
  
  int x,y;
  cin>>x>>y;

if(x==0 && x==1 )
{
  cout<< "2\n";
}
else if(x==0 && y==0)
{
  cout<<"0\n";
}

else if(x==0 && y==1)
{
  cout<<"2\n";
}
else if(x==1 && y==2)
{
  cout<<"0\n";
}
else if(x==2 && y==2)
{
  cout<<"2\n";
}

else if (x==1 && y==0)
{
  cout<<"2\n";
}
else if(x==2 && y==1)
{
  cout<<"0\n";
}
else
{
  cout<<"1\n";
}
  return 0;

}
 