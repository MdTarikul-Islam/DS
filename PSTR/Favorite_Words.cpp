#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int last=s.size()-1;
    if(s[0]=='c' && s[last]=='f'){
        cout<<"Yes"<<endl;
    }
    else if(s[0]=='c'){
        cout<<"Yes"<<endl;
    }
    else if(s[last]=='f'){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    
    return 0;
}