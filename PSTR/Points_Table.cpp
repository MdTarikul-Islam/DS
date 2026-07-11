#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int ap,as,bp,bs;
    cin>>ap>>as>>bp>>bs;
    if(ap==bp && as==bs){
        cout<<"Alice";
    }
    else{
        if(ap>bp){
            cout<<"Alice";
        }
        else if(bp>ap){
            cout<<"Bob";
        }
        else if(as>bs){
            cout<<"Alice";
        }
        else if(bs>as){
            cout<<"Bob";
        }
        
    }
    return 0;
}
