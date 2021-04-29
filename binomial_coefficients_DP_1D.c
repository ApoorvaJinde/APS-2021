#include<stdio.h>
#include<string.h>

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
    int C[r+1];
    memset(C,0,sizeof(C));
    C[0]=1;
    for(i=0;i<=n;i++)
    {
       for(j=min(i,r);j>0;j--)
          C[j] = C[j] + C[j-1];

    }

    printf("%dC%d value is %d\n",n,r,C[r]);

}
