#include <bits/stdc++.h>
using namespace std;
 

 
int main()
{
    int N;
    
    cin>> N;
  
    if(N%100==0)
    {
    cout<< N/100 << endl;
    }
    else
    {
        cout<< (N/100)+1 <<endl;
    }


    
    return 0;
}