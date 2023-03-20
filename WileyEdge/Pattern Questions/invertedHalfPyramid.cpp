#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin >> row;
    for (int j = row; j >= 1; j--)
    {
        for (int i = 1; i <= j; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}