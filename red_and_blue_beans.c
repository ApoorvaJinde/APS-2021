//https://codeforces.com/contest/1519/problem/A

#include<stdio.h>
#include<math.h>
 
int main()
{
   long long int r,b,d;
   long long int t,maxvalue,minvalue,flag;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&r,&b,&d);
        if(b>r)
        {   maxvalue=b;
            minvalue=r;
        }
        
        else
        {
            maxvalue=r;
            minvalue=b;
        }
        
        if(maxvalue<=minvalue*(d+1))
        flag=1;
        else
        flag=0;
        
        if(flag==1)
        printf("YES\n");
        else
        printf("NO\n");
        
    }
}
