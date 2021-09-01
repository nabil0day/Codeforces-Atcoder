#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n;
  cin >> n;
  long long val=1;
  for(long long i=0;i<=60;i++){
    if(val>n){
      cout << i-1 << '\n';
      break;
    }
    val*=2;
  }
  return 0;
}