/*****                                            
 *                                                   __Bismillahir Rahmanir Rahim__
 *                                          American International University Bangladesh (AIUB) 
 *                                                         Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define endl "\n"

//Palindrome--
// for(int i=s.size()-1;i>=0;--i){s_rev.push_back(s[i]);} if(s==s_rev)    

 //sort(a.begin(), a.end());sort(b.begin(), b.end());if(a==b)
  
//Find_Last + Delete_Last--
//num%10    +   num/10
//Fibonacci--
//for(int i=1;i<=N-2;i++){ num3=num1(1)+num2(2);num1=num2;num2=num3(Fibonacci);
void solve()
{
 ll n,a,b;
 
 
     cin>>a>>b;
      if(a%b==0){
            cout<<"0"<<"\n";
        }
        else
        {
            cout<<(b-(a%b))<<"\n";
        }
 
 
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}


        

        

    
 

    

    

  
    
    
    





 

 


