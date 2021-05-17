#include <bits/stdc++.h>

using namespace std;
 
int main(){
    int n;
    long long m, a;
    long long sum = 0;
    cin >> n;
    cin >> m;
    map<long long, long long> mp;
    mp[0] = 1;
    for(int i=0; i<n; i++){
        cin >> a;
        sum += a;
        mp[sum %  m]  += 1;
    }
    long long ans = 0;
    for(auto x : mp){
        ans += (x.second*(x.second-1))/2;
    }
    cout << ans << endl;
    return 0;
}