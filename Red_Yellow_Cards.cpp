#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int r,y;
        cin>>r>>y;
        int sent=0;
        if(r>0){
            sent=sent+r;
            if(y>0){
                sent=0;
                for(int i=r;i>0;i--){
                    for(int j=1;j<y;j++){
                        if(j%2==0){
                            sent++;
                        }
                    }
                }
            }
        }
        else{
            int totalY=y/2;
            sent =sent+totalY;
        }
        cout<<sent<<endl;
    }
    return 0;
}