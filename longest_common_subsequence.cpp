#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    printf("Enter string 1 : ");
    cin>>s1;
    printf("Enter string 2 : ");
    cin>>s2;

    int i,j;
    int n1=s1.length();
    int n2=s2.length();
    int lcs[n1+1][n2+1];

    for(i=0;i<=n1;i++)
    {
        for(j=0;j<=n2;j++)
        {
            if(i==0 || j==0)
                lcs[i][j]=0;

            else if(s1[i-1]==s2[j-1])
                lcs[i][j]=lcs[i-1][j-1]+1;

            else
                lcs[i][j]=(lcs[i-1][j] > lcs[i][j-1])?lcs[i-1][j]:lcs[i][j-1];
        }
    }

    printf("\nLength of longest common subsequence is %d\n",lcs[n1][n2]);
}
