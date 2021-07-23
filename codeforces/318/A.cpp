/*****                                            
                                                     __Bismillahir Rahmanir Rahim__
                                               American International University Bangladesh (AIUB) 
                                                          Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef pair <int,int> pi;

#define endl "\n"



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
ll n,k,x;
cin>>n>>k;
if(n%2==0)
{
    x=n/2;
}
else
{
 x=(n+1)/2;
}
if(k<=x)
{
 cout<<(k*2)-1;
}
else
{
    cout<<(k-x)*2<<"\n";
}


return 0;
}


        

        

    
 

    

    

  
    
    
    





 

 


