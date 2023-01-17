#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {2, 5, 1, 4, 3};
    unordered_map<int, int> mp;
    int dis_count = 0;
    for (int i = 0; i < 5; i++)
    {
        mp[arr[i]]++;
    }

    cout << mp.size() << endl;
    return 0;
}