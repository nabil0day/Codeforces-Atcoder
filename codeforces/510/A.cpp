#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 50 ;
char a[N + 5][N + 5] ;

int main()
{
    fast_io;
    int row,col ;
    cin >> row >>col ;
    for(int i = 1 ; i <= row ; i++)
    {
        for(int j = 1 ; j <= col ; j++)
        {
            a[i][j] = '.' ;
        }
    }
    int cnt = 1 ;
    for(int i = 1 ; i <= row ; i++)
    {
        if(i % 2 == 1)
        {
            for(int j = 1 ; j <=col ; j++)
            {
                a[i][j] = '#' ;
            }
        }
        else
        {
            if(cnt % 2 == 1)
            {
                a[i][col] = '#' ;
            }
            else
                a[i][1] = '#' ;
            cnt++;
        }
    }
    for(int i = 1 ; i <= row ; i++)
    {
        for(int j = 1 ; j <=col ; j++)
        {
            cout << a[i][j] ;
        }
        cout << '\n' ;
    }
}
