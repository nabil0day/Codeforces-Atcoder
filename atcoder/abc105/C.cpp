#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int N; cin >> N;
    string S = "";
    while (N != 0) {
        int r = N % 2;
        if (r == -1) r += 2;
 
        N = (N - r) / (-2);
 
        S += char(r + '0');
    }
    reverse(S.begin(), S.end());
    if (S == "") S = "0";
    cout << S << endl;
 
    return 0;
}