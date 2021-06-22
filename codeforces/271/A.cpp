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

int y;
cin>>y;

for(;;)
{
    y++;
    int b=(y/1000);
    int c=(y/100)%10;
    int d=(y/10)%10;
    int e=(y%10);
    
       if(b!=c && b!=d && b!=e  && c!=d && c!=e && d!=e) 
       {
           break;
       }
}
  
        
       
    

    cout<<y<<endl;





return 0;

}
 