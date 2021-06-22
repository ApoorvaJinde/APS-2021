#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int testcases,i,a,b,n;
    scanf("%lld",&testcases);
    while (testcases--){
        scanf("%lld",&n);
        multiset<long long int> four;
        vector<pair< long long int, long long int>> one;
        multiset<long long int> two;
        vector<pair< long long int, long long int>> three;
        for (i = 0; i < n;i++)
        {
            scanf("%lld%lld",&a,&b);
            four.insert(b);
            two.insert(a);
            three.push_back({b,a});       
            one.push_back({a,b});
         
        }
        sort(one.begin(), one.end());
        sort(three.begin(), three.end());
      

        long long int zero=0;
        long long int maaxx=LONG_MAX;
         
       long long int yourheight=0;
       long long int myheight =0;
       long long int area=LONG_MAX;
       long long int newArea,newArea1,newArea2;
        
        for ( i=0; i<(n-1); i++){
             maaxx=min(maaxx, one[i].second);
          zero=max(zero, one[i].second);
            yourheight = zero -maaxx ;
            // cout<<yourheight<<"\n";
            auto it = four.find(one[i].second);
            four.erase(it);
            myheight = *four.rbegin()-*four.begin();
          //   cout<<myheight<<"\n";
            newArea1 = (one[i].first-one[0].first)*yourheight ;
             newArea2=(one[n-1].first-one[i+1].first)*myheight;
             newArea= newArea2+newArea1;
            area = min(area, newArea);
        }
        //cout<<area<<"\n";
        zero=0;
        maaxx=LONG_MAX;
       long long int yourwidth=0;
       long long int mywidth=0 ;
        for ( i=0;i <(n-1);i++){
              maaxx=min(maaxx, three[i].second);
        zero=max(zero, three[i].second);
      
            yourwidth =zero-maaxx ;
           //  cout<<yourwidth<<"\n";
            auto it = two.find(three[i].second);
            two.erase(it);
            mywidth = *two.rbegin()-*two.begin();
            // cout<<mywidth<<"\n";
            newArea1 = (three[i].first-three[0].first)*yourwidth ;
           newArea2= (three[n-1].first-three[i+1].first)*mywidth;
           newArea=newArea2+newArea1;
            area = min(area, newArea);
        }
       // cout<<area<<"\n";
        if (area == LONG_MAX)
            area = 0;
     printf("%lld\n",area);
    }
  return 0;
}