#https://www.hackerrank.com/challenges/encryption/problem

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

int main()
{
 int i,j,l,r,c;
 bool stop=0;
 float sq;
 char s[100];
 gets(s);
 l=strlen(s);
 sq=sqrt(l);
 r=floor(sq);
 c=ceil(sq);
 if(r*c<l)
 {
 //if(((r+1)*c)<(r*(c+1)))     
 r++;
 //else
 //c++;
 } 
 char a[r+1][c],b[c][r+1];
 for(i=0;i<r+1;i++)
 {
  for(j=0;j<c;j++)
  a[i][j]='\0';  
 }
 for(i=0;i<r&&!stop;i++)
 {
  for(j=0;j<c&&!stop;j++)
  {
   if(s[c*i+j]!='\0') 
  a[i][j]=s[(c*i)+j];
  else 
  stop=true;
  }
 }
 for(i=0;i<r+1;i++)
 {
  for(j=0;j<c;j++)
  {
   b[j][i]=a[i][j];   
  }   
 }
 
 for(j=0;j<c;j++)
 {
 printf("%s",b[j]); 
 printf(" ");     
 }
 return 0; 
}
