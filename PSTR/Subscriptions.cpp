#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        double groupSize,costOfSubscription;
        cin>>groupSize>>costOfSubscription;
        double subscription=ceil(groupSize/6);
        cout<<subscription*costOfSubscription<<endl;
    }
    return 0;
}