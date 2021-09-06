#include <bits/stdc++.h>
using namespace std;
void pal(string n)
{
    int afzero=0,bezero=0,result=0;
    string h;
    for(int i=n.length()-1;i>=0;i--)
    {
        if(n[i]=='0')
        afzero++;
        else break;
    }
    for(int i=0;i<n.length();i++)
    {
        if(n[i]=='0')
        bezero++;
        else break;
    }
    if(afzero>bezero)
    {
       int  zero=afzero-bezero;
    for(int i=0;i<zero;i++)
    {
        h+='0';
    }
    }
    h+=n;
    int hsize=h.length();
    int j=hsize-1;
    for(int i=0;i<=hsize/2;i++)
    {
        
        if(j>i)
        {
            if(h[i]==h[j])
            {
                result++;
                j--;
            }
        }
    }
    if(result==hsize/2)
        cout<<"Yes\n";
    else cout<<"No\n";
}
int main()
{
    string x;
    cin>>x;
    pal(x);
    return 0;
}