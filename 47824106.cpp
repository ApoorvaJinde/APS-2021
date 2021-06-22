#include <bits/stdc++.h>
using namespace std;
#define int long long int 
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int32_t main() {
	//ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int test;
	cin>>test;
	while(test--)
	{
	    map<int,int> freqMap;
	    int num1,num2;
	    scanf("%lld",&num1);
	    scanf("%lld",&num2);
	    int list1[num1+1];
	    int list2[num2+1];
	    int itr=0;
	    while(itr<num1)
	    {
	        cin>>list1[itr];
	        itr++;
	    }
	    itr=0;
	    while(itr<num2){
	        cin>>list2[itr];
	        itr++;
	    }
	    int soltn=INT_MAX;
	    int index=0;
	    while(index<num1){
	        if(index==0){freqMap[index]=0;}
	        else if(list1[index]!=0){freqMap[index]=0;}
	        else{
	            freqMap[index]=INT_MAX;
	        }
	        index=index+1;
	    
	    
	}
	// 	for(int i=0;i<num1;i++)
// 	{
// 	    cout<<freqMap[i]<<" ";
// 	}
	int tempValue=-1;
	for(index=0;index<num1;index++)
	{
	    if(list1[index]==1){tempValue=index;}
	    if(tempValue!=-1){
	        if(list1[index]==0)
	        {freqMap[index]=min(freqMap[index],(index-tempValue));}
	        
	    }
	    
	}
// 	for(int i=0;i<num1;i++)
// 	{
// 	    cout<<freqMap[i]<<" ";
// 	}
	int tempValue2=-1;
	for(index=num1-1;index>=0;index--)
	{
	    if(list1[index]==2)
	    {
	        tempValue2=index;
	    }
	    if(tempValue2!=-1){
	        if(list1[index]==0){
	            freqMap[index]=min(freqMap[index],(tempValue2-index));
	        }
	    }
	}
	index=0;
	//cout<<index<<"\n";
	int fin=num2;
	int sum3;
	while(index<fin)
	{
	    sum3=list2[index];
	    sum3=sum3-1;
	    //cout<<sum3<<"\n";
	    if(freqMap[sum3]!=INT_MAX){
	        cout<<freqMap[sum3]<<" ";
	    }
	    else{
	        cout<<-1<<" ";
	    }
	    index=index+1;
	}
	cout<<endl;
	//return 0;
}
}