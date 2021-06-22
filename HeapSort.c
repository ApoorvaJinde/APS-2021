#include <stdio.h>
#include <stdlib.h>

void bottomupheap(int h[],int n)
{
    int i,k,v,heap,j;
    for(i=n/2;i>=1;i--)
    {
        k=i;
        v=h[k];
        heap=0;
        while((!heap)&&(2*k)<=n)    //Check if not heap and if there is at least one child
        {
            //Check if there are one or two children
            j=2*k;
            if(j<n)
            {
                if(h[j]<h[j+1])
                    j=j+1;
            }

            //Check if already a heap
            if(v>=h[j])
                heap=1;
            //Else Swap the parent with child value
            else{
                h[k]=h[j];
                k=j;
            }
        }
        h[k]=v;
    }
}

void heapsort(int h[],int n)
{
    int temp;
    if(n>1)
    {
        bottomupheap(h,n);
        temp=h[n];
        h[n]=h[1];
        h[1]=temp;
        heapsort(h,n-1);
    }
}

int main()
{
    int n=7,i;
    int h[]={0,2,9,7,6,5,8,11};
    heapsort(h,n);
    for(i=0;i<n+1;i++)
        printf("%d ",h[i]);
    return 0;
}
