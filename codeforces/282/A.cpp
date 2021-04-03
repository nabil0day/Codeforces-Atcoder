#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a,X=0;
    string s;
 
       cin>>a;
       for(int i=0;i<a;i++)
       {
           cin>>s;
           if(s[1]=='+')
           {
               X++;
           }
           else
           {
               X--;
           }
 
       }
        cout<< X << endl;
 
    }