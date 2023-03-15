#include <bits/stdc++.h>
using namespace std;

void jumpSearch(int arr[], int n, int key)
{
    // Finding block size to be jumped
    int step = sqrt(n);
    // Finding the block where element is
    // present (if it is present)
    int start = 0;
    int end = step + start;
    while (end < n && arr[end] <= key)
    {
        // update the variables to make the jump.
        start = end;
        end = end + step;

        // check if the end is greater than the size,
        // if yes, reset it.
        if (end > n - 1)
        {
            end = n;
        }
        // now do a linear search in the block
        for (int i = start; i < end; i++)
        {
            if (arr[i] == key)
                cout << " The key is present in the array at index " << i << endl;
            return;
        }
        cout << " The key is not present in the array" << endl;
    }
}
int main()
{
    int n = 5;
    int key = 0;
    int arr[n] = {1, 2, 3, 4, 5};
    jumpSearch(arr, n, key);
    return 0;
}