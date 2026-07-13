#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int total=a+b+c+d;
        if(total-a<a){
            cout<<"YES"<<endl;
        }
        else if(total-b<b){
            cout<<"YES"<<endl;
        }
        else if(total-c<c){
            cout<<"YES"<<endl;
        }
        else if(total-d<d){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}