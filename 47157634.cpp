#include <iostream>
using namespace std;

int main() {
int t,flag;
cin>>t;
while(t--)
{
    int a,b;
    int c,d;
    int k;
    cin>>a>>b>>c>>d>>k;
    if((k<(abs(b-d)+abs(a-c)))||((k-(abs(b-d)+abs(a-c)))%2!=0))
    flag=0;
    else {
        flag=1;
    }
    if(flag==1)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}
}
