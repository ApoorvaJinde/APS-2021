#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int k;
  k=n/100;
  if(n>k*100)
    k++;
  printf("%d",k);
}
