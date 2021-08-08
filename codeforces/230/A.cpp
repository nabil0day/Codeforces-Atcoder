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


    int s,n,count=0;
    cin>>s>>n;
    pair<int,int>a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n);
    //cout<<"start :";
    for(int i=0;i<n;i++)
    {
        //cout<<a[i].first<<" "<<a[i].second<<"\n";
        if(s<=a[i].first)
        {
            count++;
            break;
        }
        else{
            s+=a[i].second;
        }
    }
    if(count>0)
    {
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
return 0;
}
