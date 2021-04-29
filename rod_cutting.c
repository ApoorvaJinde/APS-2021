#include<stdio.h>

int maximum(int a,int b,int c)
{
    if(a>=b && a>=c)
        return a;
    if(b>=a && b>=c)
        return b;
    if(c>=b && c>=a)
        return c;
}
int main()
{
    int len,i,j;
    printf("Enter length of rod : ");
    scanf("%d",&len);
    int result[len+1];

    // initialising result array
    for(i=0;i<len+1;i++)
        result[i]=0;

    //dynamic programming
    for(i=2;i<len+1;i++)
    {
        for(j=0;j<=i/2;j++)
       {
         result[i]=maximum(result[i],j*(i-j),j*result[i-j]);
       }
    }

    printf("Resulting Array : \n");
    for(i=0;i<len+1;i++)
        printf("%d ",result[i]);
    printf("\n");

}
