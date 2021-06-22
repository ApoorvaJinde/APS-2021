#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include<stdbool.h>

void dijkstra(int a[10][10],int n,int s)
{
    bool v[n];
    int d[n],i,j,prev;
    int p[n],cnt=1,mn,mni;
    memset(v,0,sizeof(v));
    memset(p,s,sizeof(v));
    for(i=0;i<n;i++)
        d[i]=a[s][i];
    prev=s;
    while(cnt<n-1)
    {
        mn=INT_MAX;
        mni=-1;
        for(i=0;i<n;i++)
        {
            if(d[i]<mn&&v[i]==false)
            {
                 mn=d[i];
                 mni=i;
            }
        }
        cnt++;
        v[mni]=true;
        p[mni]=prev;
        prev=mni;
        for(i=0;i<n;i++)
        {
            if(d[mni]+a[mni][i]<d[i] && v[i]==false)
            {
                 d[i]=d[mni]+a[mni][i];
                 p[i]=mni;
            }
        }
    }
    printf("Distances from source : %d\n",s);
    for(i=0;i<n;i++)
        printf("%d ",d[i]);

    printf("\nPath from source : %d\n",s);
    for(i=0;i<n;i++)
        printf("%d ",p[i]);
}

int main()
{
    int graph[10][10],n,i,j;
    printf("Enter the number of nodes in the graph\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&graph[i][j]);
    }
    dijkstra(graph,n,5);
}
