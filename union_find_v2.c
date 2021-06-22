#include<stdio.h>

int arr[200];

void initialize(int n)
{
    int i;
    for(i = 0; i<n; i++)
        arr[i] = i;
}

int Find(int a, int b)
{
    while(arr[a]!=a)
    {
        a=arr[a];
    }
    while(arr[b]!=b)
    {
        b=arr[b];
    }
    if(a==b)
        return 1;
    else
        return 0;
}

void Union(int a, int b,int n)
{
    while(arr[b]!=b)
    {
        b=arr[b];
    }
    int temp=b;

    while(arr[a]!=a)
    {
        a=arr[a];
    }
    arr[a]=temp;
}

int main()
{
    int n,i;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    initialize(n);
    Union(0,1,n);
    Union(1,2,n);
    Union(3,4,n);
    Union(2,4,n);
    Union(6,1,n);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n%d",Find(1,6));
}
