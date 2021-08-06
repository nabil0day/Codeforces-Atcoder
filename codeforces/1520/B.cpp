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


    ll t,n,count=0;
    int a[200]={11,22,33,44,55,66,77,88,99,111,222,333,444,555,666,777,888,999,1111,2222,3333,4444,5555,6666,7777,8888,9999,11111,22222,33333,44444,55555,66666,77777,88888,99999,111111,222222,333333,444444,555555,666666,777777,888888,999999,1111111,2222222,3333333,4444444,5555555,6666666,7777777,8888888,9999999,11111111,22222222,33333333,44444444,55555555,66666666,77777777,88888888,99999999,111111111,222222222,333333333,444444444,555555555,666666666,777777777,888888888,999999999,1111111111};
    cin>>t;
    while(t--)
    {
        cin>>n;
       
      if(n<=9)
      {
          cout<<n<<"\n";
      }
      else{
          ll sol = 9;
          for(int i=0;i<200;i++)
          {
              if(a[i]>n)
              {
                  sol+=i;
                  break;
              }
          }
          cout<<sol<<"\n";
      }
    }
return 0;
}
