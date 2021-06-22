#include <stdio.h>

int main(void) {
int t;
 int n,k,sum,i,j,m;
scanf("%d",&t);
while(t--)
{
       sum=0;   
    scanf("%d%d",&n,&k);
    char a[n+1];
    scanf("%s",a);

    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        sum=sum+1;
        else
        sum=sum+2;
    }
    while(k--)
    {
        scanf("%d",&j);
        
        m=j-1;
        
        if(a[m]=='1')
        a[m]='0';
        else
        a[m]='1';
        
        if(m<n-1)
        {
            if(a[m]!=a[m+1])
            sum--;
            else
            sum++;
        }
         
        if(m>0)
        {
            if(a[m]!=a[m-1])
            sum--;
            else
            sum++;
        }
        printf("%d\n",sum);
    }
}
}

