#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,Q;
    cin>>N>>Q;
    vector<long long int> v(N+1);
    for(int i=1;i<=N;i++){
        cin>>v[i];
    }
    vector<long long int> pre(N+1);
    pre[1]=v[1];
    for(int i=2;i<=N;i++){
        pre[i]=pre[i-1]+v[i];
    } 
    while(Q--){
        int l,r;
        cin>>l>>r;
        long long sum;
        if(l==1){
            sum=pre[r];
        }
        else{
            sum=pre[r]-pre[l-1];
        }
        cout<<sum<<endl;
    }

    return 0;
}