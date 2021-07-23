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

  const ll N = 3e5 + 7;
    ll x[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;

    
    while(t--)
   {
      string str;
 cin >> str;
 ll a = 0, b = 0;
 for (int i=0;i<str.size();i++) x[int(str[i])]++;
 for (int i=0;i<str.size();i++)
 {
 if (x[int(str[i])]>1)
 {
 a++;
 b++;
 }
  else if (x[int(str[i])]==1)
 {
 if (a>b)b++;
 else a++;
 }
 x[int(str[i])] = 0;
 }
 cout << min(a,b) << endl; 
   }
   return 0;
}

        

        

    
 

    

    

  
    
    
    





 

 


