#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int fillingTime=0;
        int a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
            if(a[i]==0){
                fillingTime++;
            }
        }
        if(fillingTime>=2){
            cout<<"Water filling time"<<endl;
        }else{
            cout<<"Not now"<<endl;
        }

    }
    return 0;
}