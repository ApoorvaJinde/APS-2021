//https://www.hackerrank.com/contests/fools-holi/challenges/splash-the-colors

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int t,c,p;
    scanf("%d",&t);
    while(t--)
    {
        int l;
        scanf("%d",&l);
       c=l*l+(l-1)*(l-1);
        p=4+(l-1)*8;
     printf("%d %d\n",c,p);
    }
}
