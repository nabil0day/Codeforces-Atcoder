#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int arr[35][35], row[35], col[35];

int main()
{
    fast_io;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            row[i] += arr[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            col[i] += arr[j][i];
        }
    }
    int cnt =0;
    for(int i = 0; i < n; i++)
    {
        for(int j =0; j < n; j++)
        {
            if(row[i] < col[j])
            {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
}
