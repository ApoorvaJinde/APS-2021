//https://www.hackerrank.com/challenges/3d-surface-area/problem

#include<stdio.h>
int main()
{
 int h,w,i,j,n=0,b,min,hc=0,vc=0,tsa;
 scanf("%d%d",&h,&w);
 int a[h][w];
 for(i=0;i<h;i++)
 {
  for(j=0;j<w;j++)
  {
  scanf("%d",&a[i][j]); 
  n+=a[i][j];
  } 
 }
 b=n-(h*w);
 
 for(i=0;i<h;i++)
 {
 for(j=0;j<w-1;j++)
 {
  if(a[i][j]<=a[i][j+1])  
  min=a[i][j];
  else if(a[i][j]>a[i][j+1]) 
  min=a[i][j+1];
  hc+=min;
 }
 }
 for(j=0;j<w;j++)
 {
 for(i=0;i<h-1;i++)
 {
  if(a[i][j]<=a[i+1][j])  
  min=a[i][j];
  else if(a[i][j]>a[i+1][j]) 
  min=a[i+1][j];
  vc+=min;
 }
 }
 tsa=(6*n)-(2*(b+hc+vc));
 printf("%d",tsa);
 return 0;    
}
