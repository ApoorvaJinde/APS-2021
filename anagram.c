//https://www.hackerrank.com/challenges/anagram/problem


#include<stdio.h>
#include<string.h>
int main()
{
  int q,i,w,sum;
  scanf("%d",&q);
  for(w=0;w<q;w++)
  {
   int l;
   char s[10001];
   scanf("%s",s);
   l=strlen(s);
   if(l%2==1)
   printf("-1\n");
   else
   {
    int d;
    d=l/2;   
  int sum=0;
    int c1[26]={0},c2[26]={0};
    for(i=0;i<d;i++)
    {
        c1[s[i]-97]++;
        c2[s[d+i]-97]++;
    }   
    for(i=0;i<26;i++)
    {
        if(c2[i]>c1[i])
        {
            sum=sum+(c2[i]-c1[i]);
        }
    }
    printf("%d\n",sum);
   }
  } 
  return 0; 
}
