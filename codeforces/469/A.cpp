/*****                                            
                                                     __Bismillahir Rahmanir Rahim__
                                               American International University Bangladesh (AIUB) 
                                                          Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef pair <int,int> pi;

#define endl "\n"



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
ll n, p, q, count = 0;
    int a[10000];
    cin >> n >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> a[i];
    }
    cin >> q;
    for (int i = p; i < p + q; i++)
    {
        cin >> a[i];
    }
    sort(a, a + (p + q));
    for (int i = 0; i < p + q; i++)
    {
        if (a[i] != a[i + 1])
        {
            count++;
        }
    }
    if (n == count)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }


return 0;
}


        

        

    
 

    

    

  
    
    
    





 

 


