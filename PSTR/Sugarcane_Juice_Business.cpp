#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
         int   g;
        cin>>g;
         int  total=g*50;
        cout<<total-((40*total)/100+(30*total)/100)<<endl;
    }
    return 0;
}