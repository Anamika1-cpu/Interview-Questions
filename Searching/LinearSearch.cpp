#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = true;
            cout << i;
        }
        else if (i == n - 1 && flag == false)
        {
            cout << "-1"
                 << " ";
        }
    }

    return 0;
}