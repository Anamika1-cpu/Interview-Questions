#include <bits/stdc++.h>
using namespace std;

int catchThieves(char arr[], int n, int k)
{
    vector<int> police, thief;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'P')
        {
            police.push_back(i);
        }
        else
        {
            thief.push_back(i);
        }
    }
    int i = 0,
        j = 0, ans = 0;
    while (i < police.size() && j < thief.size())
    {
        if (abs(police[i] - thief[j]) <= k)
        {
            ans++;
            j++;
            i++;
        }
        else if (police[i] > thief[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << catchThieves(arr, n, k);
    return 0;
}