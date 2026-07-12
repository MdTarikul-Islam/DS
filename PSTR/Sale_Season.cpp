#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int rupees;
        cin>>rupees;
        if(rupees<=100){
            cout<<rupees<<endl;
        }
        else if(100<rupees && rupees<=1000){
            cout<<rupees-25<<endl;
        }
        else if(1000<rupees && rupees<=5000){
            cout<<rupees-100<<endl;
        }
        else if(rupees>5000){
            cout<<rupees-500<<endl;
        }
    }
    return 0;
}