#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int val,mxval=INT_MIN;
        for(int i=1;i<n;i++){
            val=min(a[i],a[i+1]);
            mxval=max(mxval,val);
        }
        cout<<mxval<<endl;
    }
    return 0;
}