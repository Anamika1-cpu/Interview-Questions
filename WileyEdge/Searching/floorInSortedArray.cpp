// Floor in a Sorted Array
// Given a sorted array of n distinct integers,
// find the floor value of an input ‘key’.
// The floor of x is the largest element in an array smaller than or equal to x.
// Write efficient functions to find the floor of x.
// Say, A = {-1,2,3,5,6,8,9,10} and key = 7, we should return 6 as the outcome.

// Examples

// Input

// arr[] = {1,2,8,10,10,12,19},x = 5

// Output

// 2 (2 is the largest element in arr[] smaller than 5.

#include <bits/stdc++.h>
using namespace std;

int floorSearch(int arr[], int n, int key)
{
    if (key >= arr[n - 1])
    {
        return n - 1;
    }
    if (key < arr[0])
    {
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > key)
        {
            return i - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 4, 6, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 0;
    int index = floorSearch(arr, n - 1, x);
    cout << index;
    return 0;
}