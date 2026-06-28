#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> sorted_v(v);
    sort(sorted_v.begin(),sorted_v.end(),greater<int>());
    for(int i=0;i<n;i++){
        if(v[i]!=sorted_v[i]){
            cout<<"Not Descending sorted array"<<endl;
            return 0;
        }
    }
    cout<<"Descending Sorted"<<endl;
    return 0;
}