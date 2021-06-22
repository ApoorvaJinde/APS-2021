#include <stdio.h>

int main() 
{
 long long int t;
 scanf("%lld",&t);
while(t--)
 {
  long long int a,b,c,d;
  scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
  long long int l=a/b;
  long long int p=(l-1)*d*l;
  p=p/2;
  long long int k=l*c;
  long long int m=(k+p);
  m=m*b;
  long long int g=l*d;
  g=g+c;
  g=g*(a%b);
  printf("%lld\n",g+m);
 }
	return 0;
}