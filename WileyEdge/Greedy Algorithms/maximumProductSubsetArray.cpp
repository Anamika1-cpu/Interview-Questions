#include <bits/stdc++.h>
using namespace std;

int maximunProductSubarray(int arr[], int n)
{
    int ans;

    if (n == 1)
    {
        return arr[0];
    }
    int max_Neg = INT_MIN;
    int numOF0 = 0;
    int numOFneg = 0;
    int product = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            numOF0++;
            continue;
        }
        if (arr[i] < 0)
        {
            numOFneg++;
            max_Neg = max(arr[i], max_Neg);
        }
        product *= arr[i];
    }
    // If there are all zeros
    if (numOF0 == n)
    {
        return 0;
    }
    // If there are odd number of
    // negative numbers
    if (numOFneg % 2 == 1)
    {
        // Exceptional case: There is only
        // negative and all other are zeros
        if (numOFneg == 1 && numOF0 > 0 && numOF0 + numOFneg == n)
        {
            return 0;
        }

        // Otherwise result is product of
        // all non-zeros divided by
        // negative number with
        // least absolute value.
        product = product / max_Neg;
    }
    return product;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << maximunProductSubarray(arr, n);
    return 0;
}
