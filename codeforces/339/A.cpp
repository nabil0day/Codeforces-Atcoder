/*****                                            American International University Bangladesh (AIUB)                                                          
                                                              Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
 
 
int main()
{
   string s;
   cin>>s;
   int i,j;
   for(i=0;i<s.size();i+=2)
   {
       for(j=0;j<s.size()-1;j+=2)
       {
           if(s[j]>s[j+2])
           {
               swap(s[j],s[j+2]);
           }
       }
   }
   cout<<s<<endl;

}
 