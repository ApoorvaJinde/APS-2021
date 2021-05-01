https://www.codechef.com/LTIME95C/problems/CCHEAVEN


#include<stdio.h>
#include<string.h>
int main()
{
    int t,o;
    scanf("%d",&t);
    for(o=0;o<t;o++)
    {
     int l,j,sl,flag=0,ct0=0,ct1=0;
     scanf("%d",&l);
     char s[100001];
     scanf("%s",s);
     sl=strlen(s);
     for(j=0;j<sl&&flag!=1;j++)
    {
     if(s[j]=='0')
     ct0+=1;
     if(s[j]=='1')
     ct1+=1;
     if(ct0<=ct1)
     flag=1;
    }
    if(flag==0)
    printf("NO\n");
    else 
    printf("YES\n");
    }
    return 0;
}
