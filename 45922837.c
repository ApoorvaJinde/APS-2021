#include <stdio.h>
#include <math.h>
int main() {
	int t;
	long long int a[100001],l=1;
	for(int i=0;i<100001;i++)
	{
	    a[i]=l;
	    l=((l%1000000007)*2)%1000000007;
	}
	scanf("%d",&t);
	while(t--)
	{
	   long long int n;
	    scanf("%lld",&n);
	   /* long long int k=1;
	    while(n>1)
	    {
	        k=((k%1000000007)*2)%1000000007;
	        n--;
	    }
	    */
	    printf("%lld\n",a[n-1]);
	    
	}
}