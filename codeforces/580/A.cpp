/*****                                            
                                                     __Bismillahir Rahmanir Rahim__
                                               American International University Bangladesh (AIUB) 
                                                          Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef   vector<ll>  vi;


#define pb push_back
#define pf push_front
#define mp make_pair
#define gcd(a,b) __gcd(a,b)
#define endl "\n"

const int mod = 1e9 + 7;
const double pi = 3.1415926535897932384626;
const int MAX=100005;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


ll n,count=0,start=1;
cin>>n;
ll arr[n];
for(int i=0;i<n;i++)
{
 cin>>arr[i];
 
 if(arr[i]>=arr[i-1])
 {
     count++;
     start=max(count,start);
 }
 else{
     count=1;
 }
}
cout<<start<<"\n";

return 0;
}
