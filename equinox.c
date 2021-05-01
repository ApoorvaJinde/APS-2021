//https://www.codechef.com/LTIME95C/problems/EQUINOX

#include<stdio.h>
int main()
{
    long long int t,n,i,a,b;
    scanf("%lld",&t);
    while(t--)
    {  char s[101];
        scanf("%lld%lld%lld",&n,&a,&b);
        long long int sa,an;
        sa=an=0;
        for(i=0;i<n;i++)
        {
        scanf("%s",s);
        if(s[0]=='E'||s[0]=='Q'||s[0]=='U'||s[0]=='I'|s[0]=='N'||s[0]=='O'||s[0]=='X')
        sa=sa+a;
        else
        an=an+b;
        }
        if(sa>an)
        printf("SARTHAK\n");
        else if(sa<an)
        printf("ANURADHA\n");
        else 
        printf("DRAW\n");
    }
}
