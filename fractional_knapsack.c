#include <stdio.h>
#include <stdlib.h>

float fracknapsack(int c[],int p[],int n,int w)
{
   float res;
   float pc[n];
   int i,j;
    for(i=0;i<n;i++)
    {
        pc[i]=(float)p[i]/c[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(pc[i]<pc[j])
            {
                float temp=pc[i];
                pc[i]=pc[j];
                pc[j]=temp;
                int temp1=c[i];
                c[i]=c[j];
                c[j]=temp1;
            }
        }
    }
    int cnt=0;
    float sm=0;
    i=0;
    while(cnt<w)
    {
        printf("%d\n",cnt);
        if(c[i]<(w-cnt))
        {
            cnt+=c[i];
            sm+=c[i]*pc[i];
            i++;
        }
        else
        {
            sm+=(w-cnt)*pc[i];
            break;
        }
    }
    return sm;
}

int main()
{
    int n,i,w;
    printf("Enter number of items\n");
    scanf("%d",&n);
    int c[n],p[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    printf("Enter the capacity\n");
    scanf("%d",&w);
    float res=fracknapsack(c,p,n,w);
    printf("Maximum profit:%f\n",res);
}
