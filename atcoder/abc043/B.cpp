#include <bits/stdc++.h>
using namespace std;
int main() {
  string answer, s;
  cin >> s;
  for (char c : s) {
    if (c == 'B' && !answer.empty()) {
      answer.pop_back();
    } else if (c != 'B') {
      answer.push_back(c);
    }
  }
  cout << answer;
}