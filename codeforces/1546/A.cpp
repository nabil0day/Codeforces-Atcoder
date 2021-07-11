/*****                                            
 *                                                   __Bismillahir Rahmanir Rahim__
 *                                          American International University Bangladesh (AIUB) 
 *                                                         Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

typedef long long ll;
typedef long double ld;

//Palindrome--
// for(int i=s.size()-1;i>=0;--i){s_rev.push_back(s[i]);} if(s==s_rev)    
 //Anagram--
 //sort(a.begin(), a.end());sort(b.begin(), b.end());if(a==b)
  
//Find_Last + Delete_Last--
//num%10    +   num/10
//Fibonacci--
//for(int i=1;i<=N-2;i++){ num3=num1(1)+num2(2);num1=num2;num2=num3(Fibonacci);


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
   
        
ll t;
cin>>t;
while(t--)
{
 ll n,sumA=0,sumB=0,temp,count=0;
 cin>>n;
 ll a[n],b[n];
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
     sumA=sumA+a[i];
 }
 for(int i=0;i<n;i++)
 {
     cin>>b[i];
     sumB=sumB+b[i];
 }
 if(sumA!=sumB)
 {
     cout<<-1<<"\n";
 }
 else{
     vector<ll>j,k;
    
     for(int i=0;i<n;i++)
     {
         if (a[i]==b[i])
         {
             count;
         }
         else if(a[i]<b[i])
         {
             temp= b[i]-a[i];
             while(temp--)
             {
                 j.push_back(i);
             }
         }
         else
         {
             temp= a[i]-b[i];
             while(temp--)
             {
                 k.push_back(i);
             }


         
     }
 }

 if(j.size()==0 && k.size()==0)
 {
     cout<<0<<"\n";
 }
 else{
     cout<<j.size()<<"\n";
     for(int i=0;i<j.size();i++)
     {
         cout<<k[i]+1<< " " << j[i]+1<<"\n";
     }
 }
  

}
}

        
        
}


        

    
 

    

    

  
    
    
    





 

 


