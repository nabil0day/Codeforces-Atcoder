/*****                                            
 *                                                   __Bismillahir Rahmanir Rahim__
 *                                          American International University Bangladesh (AIUB) 
 *                                                         Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
 

 
int main()
{
    char x[1000];
    cin >> x;
    int y = x[0];
    if (y >= 97)
    {
        x[0] = char(y - 32);
    }
    cout << x;
}
 