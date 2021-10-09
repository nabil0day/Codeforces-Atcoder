#include <bits/stdc++.h>
using namespace std;
int main(){
    string S;
    cin >> S;
    int ans = 0;
    if(S.substr(0, 4) == "ZONe")
      ans++;
    if(S.substr(1, 4) == "ZONe")
      ans++;
    if(S.substr(2, 4) == "ZONe")
      ans++;
    if(S.substr(3, 4) == "ZONe")
      ans++;
    if(S.substr(4, 4) == "ZONe")
      ans++;
    if(S.substr(5, 4) == "ZONe")
      ans++;
    if(S.substr(6, 4) == "ZONe")
      ans++;
    if(S.substr(7, 4) == "ZONe")
      ans++;
    if(S.substr(8, 4) == "ZONe")
      ans++;
    cout << ans <<"\n";
}