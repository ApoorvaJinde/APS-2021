#include <stdio.h>
#define max 4000005
int c[max];
int a[max];

void initm();
int main(void) {
	int t,k,s;
	long long int o;
	initm();
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&k);
	    s=4*k;
	    s++;
	    o=a[s];
	    printf("%lld",o);
	    printf("\n");
	}
	
}

void initm()
{  int l,i,j,m,p,t,k;
    for(i=0;i<max;i++)
	{
	    a[i]=0;
	}
	for(i=0;i<max;i++)
	{
	    c[i]=i;
	}

	for(j=2;j<max;j++)
	{
	    if(j-c[j]==0)
	    {
	        k=j-1;
	        c[j]=k;
	        t=j*2;
	        for(m=t;m<max;m+=j)
	        {    l=c[m]/j;
	            c[m]=l*k;
	        }
	    }
	}
	for(p=1;p<max;p++)
	{
	    a[p]=a[p]+p-1;
	    for(m=2*p;m<max;m=m+p)
	    {
	        k=c[m/p];
	        k++;
	        k=k/2;
	        a[m]=a[m]+p*k;
	    }
	}
/*	 for(i=0;i<max;i++)
	{
	    printf("%d ",a[i]);
	}
	for(i=0;i<max;i++)
	{
	    printf("%d ",c[i]);
	}
	*/
}