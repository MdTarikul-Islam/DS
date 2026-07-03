#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int sum = 0;
        for (double k = x; k > y; k--)
        {
            double time = ceil(k / 10);

            sum = sum + time;
        }
        cout << sum << endl;
    }
    return 0;
}