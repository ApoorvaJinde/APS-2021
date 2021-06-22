#include <iostream>
using namespace std;

int main() {
	int t,n,x,k,g,h;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d%d",&n,&x,&k);
	    g=h=0;
	    if(0==x%k)
	    g=1;
	    else if(0==(n+1-x)%k)
	    h=1;
	    if(g||h)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
}