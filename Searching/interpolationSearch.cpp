#include <bits/stdc++.h>
using namespace std;

int interpolationSearch(int arr[], int n, int key)
{
    int lo = 0;
    int hi = n - 1;

    while (lo <= hi && key >= arr[lo] && key <= arr[hi])
    {
        if (lo == hi)
        {
            if (arr[lo] == key)
            {
                return lo;
            }
            return -1;
        }
        int formulaPosition = lo + (((double)(hi - lo) / (arr[hi] - arr[lo])) * (key - arr[lo]));
        if (arr[formulaPosition] == key)
        {
            return formulaPosition;
        }
        if (arr[formulaPosition] < key)
        {
            lo = formulaPosition + 1;
        }
        else
        {
            hi = formulaPosition - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 12, 13, 16, 18, 19, 20, 21,
                 22, 23, 24, 33, 35, 42, 47};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 18;
    cout << interpolationSearch(arr, n, key);
    return 0;
}