#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int key)
{
    while (end >= start)
    {
        int mid = start + (end - 1) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            return binarySearch(arr, start, mid - 1, key);
        }
        else
        {
            return binarySearch(arr, mid + 1, end, key);
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << binarySearch(arr, 0, 4, 10);
    return 0;
}