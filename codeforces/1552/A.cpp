/*****                                            
                                                     __Bismillahir Rahmanir Rahim__
                                               American International University Bangladesh (AIUB) 
                                                          Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector <int> vi;

#define INF 1000000007

#define pb push_back
#define mp make_pair
#define endl "\n"



  
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);



ll n,a;
string s,t;
cin>>n;
while(n--)
{
    cin>>a;

    cin>>s;
    
    t=s;
    ll count =0;
    sort(t.begin(),t.end());
    for(int i=0;i<a;i++)
    {
        if(s[i]!=t[i])
        {
            count++;
        }
    }
    
    cout<<count<<"\n";

}
return 0;

}
    

    






        

        

    
 

    

    

  
    
    
    





 

 


