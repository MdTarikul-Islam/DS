#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        //for each case
        //input
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        vector<int> can_take;
        //find which jars are divisible by x
        for(int i=0;i<n;++i){
            if(a[i]%x==0){//divisible can take
                can_take.push_back(a[i]);
            }
        }
        //find largest jar
        int largest=0;
        for(int i=0;i<can_take.size();++i){
            largest=max(largest,can_take[i]);
        }
        cout<<largest<<endl;
    }
    return 0;
}