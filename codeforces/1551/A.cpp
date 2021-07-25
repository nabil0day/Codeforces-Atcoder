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
   ll t,n,a,b;
   cin>>t;
   while(t--)
   {
	   cin>>n;
	   a= n-(2 * ((n+1)/3));
	   b=(n+1)/3;
 
	   cout<<a<<" "<<b<<endl;
	}
	
 
	
	   
   
 
   
return 0;
}
 