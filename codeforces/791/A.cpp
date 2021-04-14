#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a, b;
    cin >> a >> b;
    if ((1 <= a) && (a <= b) && (b <= 10))
    {
        int year = 0;
        while (a <= b)
        {
            a *= 3;
            b *= 2;
            year++;
        }
        cout << year;
    }
    return 0;
}