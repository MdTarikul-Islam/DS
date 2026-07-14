#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int diff=0;
        for(int i=0;i<n;i++){
            if(a[i]>=1000){
                diff++;
            }
        }
        cout<<diff<<endl;
    }
    return 0;
}