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
    int n,x,y,count=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       
        cin>>x>>y;
        if(y-x>=2)
        {
            count++;
        }
         
    }
    
   cout<<count<<endl;
  
return 0;

}
 