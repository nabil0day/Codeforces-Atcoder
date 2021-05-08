#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
	int t;
        
	long long int A,B;
	cin>>t;

	for(int i=0;i<t;i++)
       {
		cin>>A>>B;
		if(B==1)
                {
			cout<<"NO"<<"\n";

		 }
                 else
                     {
			cout<<"YES\n"<<A<<" "<<A*B<<" "<<A*B+A<<"\n";
		      }
	}
}