#include<bits/stdc++.h>
using namespace std;
void isprime(){
    int num;
    cin>>num;
    bool flag=1;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            flag=0;
            break;
        }
    }
    if(num==1){
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
    int testCase;
    cin>>testCase;
    while(testCase--){
        isprime();
    }
    return 0;
}