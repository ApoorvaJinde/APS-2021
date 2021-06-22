#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,a,b,x1,xb,xab;
	    scanf("%d%d%d",&x,&a,&b);
	    x1=100-x;
	    xb=x1*b;
	    xab=a+xb;
	    printf("%d\n",10*xab);
	}
}