//https://www.hackerrank.com/contests/fools-holi/challenges/in-the-name-of-fool

#include<bits/stdc++.h>

using namespace std;


int main() {  
      
    
    int n,m,j,count;
    cin>>n;
    string f[n+1];
    string match;
    for(int i=1;i<=n;i++)
        cin>>f[i];
     cin>>m;
    for(int i=0;i<m;i++)

    {
        count=0;
        cin>>match;
        for(j=1;j<=n;j++)
        {
            if(match==f[j])
                count++;
        }
        cout<<count<<"\n";
    }
}
