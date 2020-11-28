#include <bits/stdc++.h>
using namespace std;
 
int main(){
  long long A,B,S;
  int N,i;
 
  cin >> N;
  S = 0;
  
  for(i = 0;i<N;i++){
    cin >> A >> B;
    S += B*(B+1)/2 - A*(A-1)/2;
  }
  cout << S << endl;
  return 0;
}