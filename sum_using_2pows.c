#include <stdio.h>
#include <stdlib.h>

void sum(int n,int k)
{
    int sum=k,A[k],i;
    for(i=0;i<k;i++)
        A[i]=1;

    for(i=k-1;i>=0;i--)
    {
        while(sum+A[i]<=n)
        {
            sum+=A[i];
            A[i]*=2;
        }
    }
    if(sum!=n)
        printf("No Solution\n");
    else
    {
        for(i=0;i<k;i++)
        {
            printf("%d ",A[i]);
        }
        printf("\n");
    }

}

int main()
{
    int n,k;
    printf("Enter sum and number of elements\n");
    scanf("%d %d",&n,&k);
    sum(n,k);
    return 0;
}
