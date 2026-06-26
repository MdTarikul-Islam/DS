#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int space = 1, gap = n - 2;

    for (int i = 0; i < n / 2; i++)
    {

        for (int j = 1; j < space; j++)
        {
            cout << " ";
        }
        cout << "\\";
        for (int k = 0; k < gap; k++)
        {
            cout << " ";
        }
        cout << "/";
        cout << endl;
        gap -= 2;
        space++;
    }
    space = n / 2;
    gap = 1;

    for (int j = 1; j < space + 1; j++)
    {
        cout << " ";
    }
    cout << "X" << endl;

    for (int i = 0; i < n / 2; i++)
    {

        for (int j = 1; j < space; j++)
        {
            cout << " ";
        }
        cout << "/";
        for (int k = 0; k < gap; k++)
        {
            cout << " ";
        }
        cout << "\\";
        cout << endl;
        gap += 2;
        space--;
    }

    return 0;
}