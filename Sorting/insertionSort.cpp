#include <bits/stdc++.h>
using namespace std;

void insertion_Sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /*storing current element whose left side is checked for its
            correct position .*/
        int temp = arr[i];
        int j = i;
        /* check whether the adjacent element in left side is greater or
           less than the current element. */
        while (j > 0 && temp < arr[j - 1])
        {
            arr[j] = arr[j - 1];
            j = j - 1;
        }
        arr[j] = temp;
    }
}

int main()
{
    int arr[6] = {3, 9, 5, 7, 2, 12};
    insertion_Sort(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}