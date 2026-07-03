#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        int total_time=0;
        for(int i=x;i>=y+1;i--){
            total_time +=i;
        }
        cout<<total_time<<endl;
    }
    return 0;
}