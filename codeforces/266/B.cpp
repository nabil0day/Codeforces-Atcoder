/*****                                            
 *                                                   __Bismillahir Rahmanir Rahim__
 *                                          American International University Bangladesh (AIUB) 
 *                                                         Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void)
{

int n,t;

cin>>n>>t;
string s;
cin>>s;
for(int i=0;i<t;i++)
{
    for(int j=0;j<s.size()-1;j++)
    {
        if(s[j]=='B' && s[j+1]=='G')

        {
            s[j]='G';
            s[j+1]='B';
            j++;
        }
    }
    
}
cout<<s<<endl;

}
 