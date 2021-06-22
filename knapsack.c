#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter number of items\n");
    scanf("%d",&n);
    int w[n],c[n],cap;
    printf("Enter the weight and value associated with items\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&w[i],&c[i]);
    }
    printf("Enter capacity of bag\n");
    scanf("%d",&cap);
    int v[n+1][cap+1];
    for(i=0;i<=cap;i++)
    {
        v[0][i]=0;
    }
    for(i=0;i<=n;i++)
    {
        v[i][0]=0;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=cap;j++)
        {
            if((j-w[i-1])<0)
            {
                v[i][j]=v[i-1][j];
            }
            else
            {
                if(v[i-1][j]>(v[i-1][j-w[i-1]]+c[i-1]))
                {
                    v[i][j]=v[i-1][j];
                }
                else
                {
                    v[i][j]=v[i-1][j-w[i-1]]+c[i-1];
                }
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=cap;j++)
            printf("%d ",v[i][j]);
        printf("\n");
    }
    printf("Maximum Profit : %d\n",v[n][cap]);
    return 0;
}
