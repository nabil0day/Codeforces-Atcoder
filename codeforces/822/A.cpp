/*****                                            
                                                     __Bismillahir Rahmanir Rahim__
                                               American International University Bangladesh (AIUB) 
                                                          Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector <int> vi;

#define INF 1000000007

#define pb push_back
#define mp make_pair
#define endl "\n"



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   ll a, b ,c;
	cin >> a >> b;
	if (a < b)
	{
		c = a;
		a = b;
		b = c;
	}
	for (int i = b-1; i > 0; i--)
		b = b * i;
	cout << b;

return 0;
}


        

        

    
 

    

    

  
    
    
    





 

 


