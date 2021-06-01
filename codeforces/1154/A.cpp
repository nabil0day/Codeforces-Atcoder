/*****                                            
 *                                                   __Bismillahir Rahmanir Rahim__
 *                                          American International University Bangladesh (AIUB) 
 *                                                         Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main()
{
int arr[4];
for(int i=0;i<4;i++)
{
    cin>>arr[i];
}
sort(arr,arr+4);
int c= arr[3]-arr[0];
int b= arr[2]-(arr[3]-arr[0]);
int a= arr[3]-arr[2];

cout<< a<< " " <<b <<" " <<c <<" "<<endl;

}
 