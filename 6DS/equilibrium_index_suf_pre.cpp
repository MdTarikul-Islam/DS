#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    //TC->O(N)
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    vector<int> pre(n);
    pre[0]=v[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+v[i];
    }

    // for(int i=0;i<n;i++){
    //     cout<<pre[i]<<endl;
    // }
    
    //prefix & suffix
    //TC ->O(n)
    vector<int> suf(n);
    suf[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i]=suf[i+1]+v[i];
    }

    for(int i=0;i<n;i++){
        // cout<<pre[i]<<" "<<suf[i]<<endl;
        if(pre[i]==suf[i]){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}