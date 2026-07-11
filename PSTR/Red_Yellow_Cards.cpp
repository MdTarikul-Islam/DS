#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int r, y;
        cin >> r >> y;
        int sent = r;

        if (y > r + 1)
        {
            sent = sent + (y - r) / 2;
        }

        cout << sent << endl;
    }
    return 0;
}