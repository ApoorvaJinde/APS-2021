#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int> mop;
int main()
{

    long long int n,k,u,i,t;
    long long int a,b;
    scanf("%lld%lld",&n,&k);
    for(i=0;i<n;i++){
        scanf("%lld%lld",&a,&b);
        t=mop[a];
        t=t+b;
        mop[a]=t;
        
    }
    for (auto j = mop.begin(); j != mop.end(); j++){
        if(k>=j->first){
            u=k;
            u=u+j->second;
            k=u;
        }
    }
  printf("%lld\n",k);
    
}
