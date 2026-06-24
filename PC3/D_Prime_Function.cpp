#include<bits/stdc++.h>
using namespace std;
void primeFunction(){
    int n;
    cin>>n;
    bool flag=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(n==1){
        cout<<"NO"<<endl;
    }
    else{
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
int main()
{
    int test;
    cin>>test;
    while(test--){
        primeFunction();
    }
    return 0;
}