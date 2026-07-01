#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    
    while(t--){
        int n,k;
        cin>>n>>k;
        int red=n-1;
        int blue=k-red;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]>=0){
                red+=a[i];
                blue-=a[i];
            }
            else if(a[i]<=0){
                red-=a[i];
                blue+=a[i];
            }
        }
        
        if(blue>=0 && red>=0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}