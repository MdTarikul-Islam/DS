#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        float person,slices;
        cin>>person>>slices;
        cout<<ceil((person*slices)/4)<<endl;
    }
    return 0;
}