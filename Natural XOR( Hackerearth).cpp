// C++ program to find XOR of numbers
// from 1 to n.
#include<bits/stdc++.h>
using namespace std;
 
// Method to calculate xor
void computeXOR(long long int n)
{
 
// If n is a multiple of 4
if (n % 4 == 0)
	printf("%lld %lld",1,n);
 
// If n%4 gives remainder 1
else if (n % 4 == 1)
	printf("%lld %lld",1,1);
 
//else if (n % 4 == 1&&n!=1)
//	printf("%lld %lld %lld",2,n,n-1);
 
// If n%4 gives remainder 2
else if (n % 4 == 2)
	printf("%lld %lld %lld",2,n,1);
 
//else if (n % 4 == 2&&n!=2)
//	printf("%lld %lld %lld %lld",3,n,n-1,n-2);
 
// If n%4 gives remainder 3
else 
printf("0");
 
 
}
 
// Driver method
int main()
{
long long int t,n;
scanf("%lld",&t);
while(t--)
{
    scanf("%lld",&n);
    computeXOR(n);
    
    
    printf("\n");
    
}
}
 
 
