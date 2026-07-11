#include<bits/stdc++.h>
using namespace std;
int main()
{
    int costForFifty,costPerKilo,distance;
    cin>>costForFifty>>costPerKilo>>distance;
    if(distance>50){
        cout<<costForFifty + (costPerKilo)*(distance-50)<<endl;
    }
    else{
        cout<<costForFifty<<endl;
    }

    return 0;
}