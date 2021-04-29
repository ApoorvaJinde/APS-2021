  
#include<stdio.h>

int countSetBits(int n);

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Number of set bits in %d is %d\n",num,countSetBits(num));
    return 0;
}

int countSetBits(int n)
{
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
