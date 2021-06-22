#include <stdio.h>
 
void swap(short int* x,short int* y)
{
    short int z = *x;
    *x = *y;
    *y = z;
}
 
int main(){
	long long int n,x,a,i,j,b;
	scanf("%lld%lld%lld",&n,&a,&x);
	 b=n-a;
	if(x>a*(n-a))
	printf("%d\n",-1);
   
	else
	{
		for(i=0;i<n-b-1-x/b;i++)
		{
			printf("%d ",0);
 
		}
		for(j=0;j<x%b;j++)
		{
			printf("%d ",1);
		}
		printf("%d ",0);
		
		for(j=0;j<b-(x%b);j++)
		{
			printf("%d ",1);
		}
		for(i=0;i<x/b;i++)
		{
			printf("%d ",0);
 
		}
 
	}
	   
}
 
