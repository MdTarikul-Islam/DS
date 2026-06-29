#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(int x=1;x<=t;x++){
        int n,k;
        int player;
        cin>>n>>k;
        for(int i=1;i<n;i++){
            if(x+k<=n){
                player=x+k;
            }
            else{
                player=x;
            }
        }
        cout<<player<<endl;
    }
    return 0;
}