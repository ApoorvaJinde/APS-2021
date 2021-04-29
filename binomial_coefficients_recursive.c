#include<stdio.h>

int binomialCoeff(int n,int r)
{
    if(r==0 || r==n)
        return 1;
    return binomialCoeff(n-1,r-1)+binomialCoeff(n-1,r);
}
int main()
{
    int n,r;
    printf("Enter n and r values respectively : ");
    scanf("%d %d",&n,&r);

    printf("%dC%d value is %d\n",n,r,binomialCoeff(n,r));
}
