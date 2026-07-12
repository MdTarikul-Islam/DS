#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ready=0,notReady=0;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        
        if(a[i]%2==0){
            ready++;
        }
        else if(a[i]%2!=0){
            notReady++;
        }
        
    }

    if(ready>notReady){
        cout<<"READY FOR BATTLE"<<endl;
    }
    else{
        cout<<"NOT READY"<<endl;
    }

    return 0;
}