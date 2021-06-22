#include <stdio.h>
#include <stdlib.h>

int partition(int a[],int low,int high)
{
    int pivot=a[high];
    int i=low-1;
    int j,temp;
    for(j=low;j<high;j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    i=i+1;
    temp=pivot;
    a[high]=a[i];
    a[i]=temp;

    return (i);
}

void quicksort(int a[],int l,int h)
{
    if(l<=h){
    int i=partition(a,l,h);
    quicksort(a,l,i-1);
    quicksort(a,i+1,h);
    }
}

int main()
{
    int n,a[100],i;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
