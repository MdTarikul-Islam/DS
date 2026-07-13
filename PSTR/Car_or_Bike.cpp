#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int x,y;
        cin>>x>>y;
        if(x<y){
            cout<<"BIKE"<<endl;
        }
        else if(x>y){
            cout<<"CAR"<<endl;
        }
        else{
            cout<<"SAME"<<endl;
        }
    }
    return 0;
}