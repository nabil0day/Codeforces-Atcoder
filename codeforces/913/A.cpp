#include<bits/stdc++.h>
using namespace std ;

long long bigMod(long long base, long long  exp)
{
    if(exp == 0)
        return 1;
    if(exp % 2 == 1)
    {
        return base * bigMod(base, exp - 1);
    }
    else
    {
        long half = bigMod(base, exp / 2);
        return half * half;
    }
}
int main()
{
    long long n,m,val;
    cin >> n;
    cin >> m;

    if(n <= 31)
    {
        val = bigMod(2,n);
        cout << m % val;
    }
    else
    {
        cout << m ;
    }

}