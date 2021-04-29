#include<iostream>
#include<bits/stdc++.h>
#define N 100000
#define  ll long long int
#define ff(i,l,n) for(long long int i =l;i<=n;i++)
using namespace std;



int cutRod(int price[], int n) 
{ 
   if (n <= 0) 
     return 0; 
   int max_val = INT_MIN; 

   for (int i = 0; i<n; i++) 
         max_val = max(max_val, price[i] + cutRod(price, n-i-1)); 
  
   return max_val; 
} 
  

int main()
{
    ll n;
    cin>>n;
    int arr[1000]={0};
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    cout<<cutRod(arr,n)<<endl;
    return 0;
}
