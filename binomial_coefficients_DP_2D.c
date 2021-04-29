#include<stdio.h>

int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}

int main()
{
    int n,r,i,j;

    printf("Enter n and r values respectively : ");
    scanf("%d %d",&n,&r);
    int C[n+1][r+1];

    for(i=0;i<=n;i++)
    {
       for(j=0;j<=min(i,r);j++)
       {
           if(j==0 || j==i)
              C[i][j]=1;
           else
              C[i][j]=C[i-1][j-1]+C[i-1][j];

       }
    }

    printf("%dC%d value is %d\n",n,r,C[n][r]);

}
