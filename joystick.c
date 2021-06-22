// Sample code to perform I/O:
#include <stdio.h>
 
int main(){
	int i,j;
	char num[1000001];
	scanf("%s", num);              			// Reading input from 
 
for(i=1;i<=4;i++)
printf("0 %d\n",i);
 
for(j=1;j<=3;j++)
{
	for(i=0;i<=5;i++)
	{
		printf("%d %d\n",j,i);
	}
}
 
for(i=1;i<=4;i++)
printf("4 %d\n",i);
	//printf("Input number is %d.\n", num);       // Writing output to STDOUT
}
