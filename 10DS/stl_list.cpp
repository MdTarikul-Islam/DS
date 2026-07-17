#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> l={1,2,3,4,5};
    // int a[]={10,20,30};
    vector<int> v={10,20,30};
    list<int> l2(v.begin(),v.end());
    // list<int> l(10,3);
    // l2.clear();
    // cout<<l2.size()<<endl;
    l2.resize(5,100);
    if(l2.empty()){
        cout<<"Empty";
    }
    for(int val: l2){
        cout<<val<<endl;
    }

    // for(auto it=l.begin();it!=l.end();it++){
    //     cout<<*it<<endl;
    // }
    // cout<<*l.begin()<<endl;
    // vector<int> v;
    // cout<<l.size()<<endl;
    return 0;
}