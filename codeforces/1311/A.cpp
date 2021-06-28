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
    
    
   int t,a,b,x,y;
   cin>>t;
   for(int i=1;i<=t;i++)
{
  cin>>a>>b;   
  if(b>a)
  {
    int x=b-a;
    if(x%2==0)
    {
        cout<<"2\n";
    }
    else{
        cout<<"1\n";
    }
  }
    else if(a==b)
    {
        cout<<"0\n";
    }
  
    else{
        int y=a-b;
        if(y%2==0)
        {
            cout<<"1\n";
        }
        else{
            cout<<"2\n";
        }
    }

  }
} 

 

 


