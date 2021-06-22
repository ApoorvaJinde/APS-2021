#include <bits/stdc++.h>
using namespace std;
 

long long int countPair(long long int *a, long long int n, long long int k)
{
	long long int hash[k] = {0};
	long long int ans = 0,i;
	for(i=0;i<n;i++) {
		long long int r = a[i] % k;
		ans+=hash[(k+r)%k];
		hash[r]++;
	}

	return ans;
}
 
 
int main()
{
	long long int n,i;
	cin>>n;
	long long int arr[n+1];
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<countPair(arr, n, 200)<<"\n";
	return 0;
}
