/*****                                            
                                                     __Bismillahir Rahmanir Rahim__
                                               American International University Bangladesh (AIUB) 
                                                          Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector <int> vi;


#define pb push_back
#define mp make_pair
#define gcd(a,b) __gcd(a,b)
#define endl "\n"

const int mod = 1e9 + 7;
const double PI = 3.1415926535897932384626;
const int mod_2 = 998244353;
const int MAX=100005;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif

   ll arr[7],sum=0,sum1;
   for(int i=0;i<6;i++)
   {
       cin>>arr[i];
       sum=sum+arr[i];
   }
   for(int i=0;i<4;i++)
   {
       for(int j=i+1;j<5;j++)
       {
           for(int z=j+1;z<6;z++)
           {
               sum1=arr[i]+arr[j]+arr[z];
               if(sum1==(sum-sum1))
               {
                   cout<<"YES\n";
                  return 0;
               }
           }
       }
   }
   cout<<"NO\n";

   return 0;
 
}


/*

*/
