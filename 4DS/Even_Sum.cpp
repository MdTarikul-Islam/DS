#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int total_sum = 0;
        for (int i = 0; i < n; i++)
        {
            total_sum = total_sum + a[i];
        }
        // restsum=total_sum-ai
        bool flg = false;
        for (int i = 0; i < n; i++)
        {
            int restsum = total_sum - a[i];
            if (restsum % 2 == 0)
            {
                flg = true;
                break;
            }
        }
        if (flg == true)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}