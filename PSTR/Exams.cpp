#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        float x,y,z;
        cin>>x>>y>>z;
        float passRate=(z*100)/(x*y);
        if(passRate>50){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}