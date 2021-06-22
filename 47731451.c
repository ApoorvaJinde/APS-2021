#include <stdio.h>
#include <math.h>
int main() 
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
  int a,b;
  int A,B;
  scanf("%d%d%d%d",&a,&b,&A,&B);
  double k=A/a;
  double l=B/b;
  int k1=ceil(k);
  int l1=ceil(l);
  printf("%d\n",k1+l1);
 }
	return 0;
}