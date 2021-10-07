#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        string s;
        cin>>s;
        int b=s[a-1]-'0';
        bool odd=false,even=false;
        for(int i=1;i<=a;i++)
        {
            if(i%2==1)
            {
                    odd |= ((s[i - 1] - '0') % 2 == 1);
            }
            else
            {
                    even |= ((s[i - 1] - '0') % 2 == 0);
            }
        }
        if(a%2==1)
        {
            if(odd==true) cout<<1<<endl;
            else cout<<2<<endl;
        }
        else
        {
            if(even==true) cout<<2<<endl;
            else cout<<1<<endl;
        }
    }
}
