#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        float child,candy;
        cin>>child>>candy;
        float packet=0;
        if(child>candy){
            packet=ceil((child-candy)/4);
        }
        cout<<packet<<endl;
    }
    return 0;
}