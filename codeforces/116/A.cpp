/**    Tarm [CF 116 A]
 * 
 * 
 * */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	 ll n;
	 cin>>n;
	 ll capacity=0;
	 ll now=0;
	 for(int i=0;i<n;i++){
		 int a,b;
		 cin>>a>>b;
		 now-=a;
		 now+=b;
		 capacity=max(capacity,now);

	 }
	 cout<<capacity;
}