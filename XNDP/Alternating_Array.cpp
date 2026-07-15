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
        int a[n];
        for (int i = 1; i <=n; i++)
        {
            cin >> a[i];
        }
        int flag = 0;

        if (a[1] % 2 == 0)
        {

            for (int i = 2; i <=n; i += 2)
            {
                if (a[i] % 2 == 0)
                {
                    flag++;
                }
            }
        }
        else 
        {
            for (int i = 2; i <=n; i += 2)
            {
                if (a[i] % 2 != 0)
                {
                    flag++;
                }
            }
        }

        cout << flag << endl;
    }
    return 0;
}