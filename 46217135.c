#include<stdio.h>
long long int s[1000001];

int main()
{
    long long int t,n,m,i,j,c;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        
        for(i=0;i<1000001;i++)
        {
            s[i]=1;
        }
        
        c=0;
        i=2;
        while(i<n+1){
            c=c+s[m%i];
            j=m%i;
            //printf("%lld",j);
            while(j<n+1)
            {
                s[j]=s[j]+1;
                j=j+i;
                //printf("%lld",j);
            }
            i=i+1;
        }
        printf("%lld\n",c);
    }
}