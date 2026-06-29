#include <bits/stdc++.h>
using namespace std;
void arr(int n)
{
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> b(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cout<< b[i] <<" ";
    }
    for (int i = 1; i <= n; i++)
    {
        if(i==1){
            cout<<a[i];
        }
        else{
            cout<<" " << a[i];
        }
    }
}
int main()
{
    int n;
    cin >> n;
    arr(n);

    return 0;
}