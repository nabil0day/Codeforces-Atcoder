/*****                                            American International University Bangladesh (AIUB)                                                          
                                                              Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main()
{
    int up=0,lo=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            up++;
        }
        else
        {
            lo++;
        }
    }
    if(up<lo)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }
    if(up>lo)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=toupper(s[i]);
        }
        cout<<s<<endl;
    }
        if(up==lo)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }
  
    
 
    return 0;
  }
 