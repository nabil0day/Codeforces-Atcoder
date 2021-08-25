#include<bits/stdc++.h>
using namespace std;


int main()
{
  ios_base::sync_with_stdio(0); 
  cin.tie(0);
  cout.tie(0);
  int T=1;
  cin>>T;
  read:
  while(T--){
    int n;
    cin>>n;
    if(n==1) cout<<9<<endl;
    else if(n==2) cout<<98<<endl;
    else if(n==3) cout<<989<<endl;
    else {
      cout<<989;
      for(int i=0;i<n-3;i++) {
        cout<<i%10;
      }
      cout<<endl;
    }

  }
  return 0;
}