/*****                                            American International University Bangladesh (AIUB)                                                          
                                                              Hadiur Rahman Nabil
                                                                  
                                                               
                                                          
*****/
#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int  n, k, nab;
    cin >> n >> k;
    nab = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            nab = nab+ (i+1)*100 + (j+1);
        }
        
    }
    cout << nab << endl;
 
 
    return 0;
  }
 