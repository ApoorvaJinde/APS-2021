//https://www.hackerrank.com/challenges/pangrams/problem

#include<stdio.h>
#include<string.h>
int main()
{
 int l,i,count=0;
 int arr[26];
 for(i=0;i<26;i++)
 arr[i]=0;
 char s[1000];
 gets(s);
 l=strlen(s);
 for(i=0;i<l;i++)
 {
  if((s[i]>=65)&&(s[i]<=90))
  {
  s[i]=s[i]+32;
  arr[s[i]-97]=1;
  }
  if((s[i]>=97)&&(s[i]<=122))
  arr[s[i]-97]=1;
 }  
 for(i=0;i<26;i++)
 {
 if(arr[i]==1)
  count+=1;
 }
 if(count==26)
 printf("pangram");
 else
 printf("not pangram");
 return 0;
}
