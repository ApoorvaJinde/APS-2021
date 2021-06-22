#include <stdio.h>
#include <stdlib.h>

struct order
{
    int preorder;
    int postorder;
};

struct order o[10];
int tick=1;
int v[10];

void dfs(int m[10][10], int n, int source)
{
    int i;

    v[source] = 1;
    o[source].preorder=tick++;
    for(i=0; i<n; i++)
    {
        if(m[source][i] == 1 && v[i] == 0)
        {
            dfs(m, n, i);
        }
    }
    o[source].postorder=tick++;
}

int main()
{
    int a[10][10],i,n,j,t[10];
    int src;
    printf("Enter number of vertices\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the source vertex\n");
    scanf("%d",&src);
    dfs(a,n,src);
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(v[i]!=1)
            dfs(a,n,i);
    }
    for(i=0;i<n;i++)
        t[i]=i;
    int temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(o[t[i]].postorder<o[t[j]].postorder)
            {
                temp=t[i];
                t[i]=t[j];
                t[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",t[i]);
    }
}
