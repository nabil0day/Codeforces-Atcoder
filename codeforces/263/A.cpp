#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a=0;
    for(x=1; x<=5; x++)
    {
        for(y=1; y<=5; y++)
        {
            cin>>a;
            if(a==1)
            {
                cout<<abs(x-3)+abs(y-3)<<endl;
            }
        }
    }
}