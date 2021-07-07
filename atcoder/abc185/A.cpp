#include <iostream>

using namespace std;

int main()
{
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int x= min(a,b);
  int y= min(c,d);
  int ans =min(x,y);
  cout<< ans<<endl;

    return 0;
}