#include<stdio.h>
int main()
{
    int n,k;
    long long sum;
    scanf("%d%d",&n,&k);
    sum=(n*k*(k+1))/2;
    sum=sum+50*n*(n+1)*k;
    printf("%lld",sum);
}
