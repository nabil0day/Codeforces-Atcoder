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





  




    int vecSum(vector<int>arr)
    {
        int res=0;
        for(int i : arr)
        {
            res+=i;
        }
        return res;
    }
    void solve()
    {
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        for(int &i : arr)
        {
            cin>>i;
        }
        for(int i=0;i<n;i++)
        {
            if((i+1)%2==0)
            {
                arr[i]--;
            }
        }
        int sum=vecSum(arr);
        if(sum>x)
        {
            cout<<"No\n";
        }
        else{
            cout<<"Yes\n";
        }
        }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
   
        solve();
    
    return 0;
}

    
 

    

    

  
    
    
    





 

 


