#include<bits/stdc++.h>
using namespace std;
int main()
{
    //testcase
    int t;
    cin>>t;
    while(t--){
        //inputs
        int n,m;
        cin>>n>>m;
        string s,t;
        cin>>s>>t;
        int min_len=min(n,m);
        for(int i=0;i<min_len;++i){
            if(s[i]==t[i]){
                //if equal,so match
                cout<<s[i];
            }
            else{
                //no match
                break;
            }
        }
        cout<< endl;
    }
    return 0;
}