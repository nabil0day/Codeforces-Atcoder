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
    cin.tie(NULL); cout.tie(NULL);


int arr[5]={100,20,10,5,1};
ll n,ans=0;
cin>>n;
for(int i=0;i<5;i++)
{
   int x=n/arr[i];
   n-=x*arr[i];
   ans=ans+x;
}
cout<<ans<<"\n";
return 0;
}


        

        

    
 

    

    

  
    
    
    





 

 


