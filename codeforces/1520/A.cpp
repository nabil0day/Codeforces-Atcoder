#include <bits/stdc++.h>
#include <string>
 
using namespace std;
 
bool susp() {
    int n;
    cin >> n;
    string days;
    cin >> days;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (days[j] == days[i] && days[j - 1] != days[i])
                return false;
        }
    }
    return true;
}
 
int main()
{
    int t;
    cin >> t;
    bool cases[t];
    for (int i = 0; i < t; i++) {
        cases[i] = susp();
    }
    for (bool b : cases) {
        if (b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}