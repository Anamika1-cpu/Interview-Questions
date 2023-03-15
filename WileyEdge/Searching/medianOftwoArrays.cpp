#include <bits/stdc++.h>
using namespace std;

int medianOfTWoArray(int arr1[], int n, int arr2[], int m)
{
    int size = n + m;
    int merged[size];
    int temp = size / 2;

    for (int i = 0; i < n; i++)
    {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        merged[n - 1 + i] = arr2[i];
    }
    sort(merged, merged + n);
    if (size % 2 == 0)
    {
        return (merged[temp] + merged[temp - 1] / 2);
    }
    else
    {
        return merged[temp];
    }
}
int main()
{
    int arr1[] = {-5, 3, 6, 12, 15};
    int arr2[] = {-12, -10, -6, -3, 4, 10};

    int i = sizeof(arr1) / sizeof(arr1[0]);
    int j = sizeof(arr2) / sizeof(arr2[0]);
    cout << medianOfTWoArray(arr1, i, arr2, j);
    return 0;
}