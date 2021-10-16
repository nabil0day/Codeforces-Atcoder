#include<bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

using namespace std;

// 

int main()
{
    int n;
    cin>>n;
    int arr[10000];
    int i=0;
    int k,x=100000000;
    for(k=1; k<=x; k++)
    {
        int sum=0;
        int a = k;
        while(a!=0)
        {
            sum+= a%10;
            a/=10;
        }
        if(sum==10)
        {
            arr[i]=k;
            i++;
            if(i == 10000)
            {
            	break;
            }
        }
    }
    
    cout<<arr[n-1]<<endl;
    return 0;
}