#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;


    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i+=2;
            cout<<" ";
        }
        else
        {
            cout<<s[i];
        }
    }
}
