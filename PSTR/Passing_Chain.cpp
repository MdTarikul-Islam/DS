#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int tracker=1;
        for(int i=1;i<=n;i+=k){
            tracker =i;
        }
        cout<<tracker<<endl;
    }
    return 0;
}