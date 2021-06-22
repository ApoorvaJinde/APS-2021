#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    /*
        First Method :  J(2k)=2*J(k)-1
                        J(2k+1)=2*J(k)+1
    */
    int n,i;
    printf("Enter the number of people/n:\n");
    scanf("%d",&n);
    int a[n+1];
    a[1]=1;
    for(i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            a[i]=2*a[i/2]-1;
        }
        else
        {
            a[i]=2*a[i/2]+1;
        }
    }
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);

    //Alternative Method
    /*
        Left shift the given number keeping the same number of bits and add 1
    */
    int s=n,cnt=0;

    //Counting number of bits
    while(s>0)
    {
        cnt++;
        s>>=1;
    }
    int g=pow(2,cnt)-1;

    //Left shift and add 1
    int res=((n<<1)&g)+1;
    printf("\n%d",res);
    return 0;
}
