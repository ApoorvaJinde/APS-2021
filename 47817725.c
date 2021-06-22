#include<stdio.h>

int main() {
    long long int testcases,n,m;
    scanf("%lld",&testcases);
    while(testcases--)
    {
        scanf("%lld%lld",&n,&m);
        long long int aq=2,res=1;
        while(n!=0){
        if(n&1){
            res=(res*aq)%1000000007;
        }
        n=n>>1;
        aq=(aq*aq)%1000000007;
    }
res--;
long long int sol = 1;    
    res = res % 1000000007;
    if (res == 0) sol= 0;
    while (m > 0)
    {
        if (m & 1)
            sol = (sol*res) % 1000000007;
        m = m>>1;
        res = (res*res) % 1000000007;
    }
        
    printf("%lld\n",sol);

}
}