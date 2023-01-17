#include <bits/stdc++.h>
using namespace std;

int isPalindrome(int n)
{
    int temp = n;
    int rev = 0;

    while (temp != 0)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    if (n == rev)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int arr[5] = {212, 456, 3333, 89, 545};
    int res = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (isPalindrome(arr[i]) && res < arr[i])
        {
            res = arr[i];
        }
    }
    if (res == INT_MIN)
    {
        res = -1;
    }
    cout << res << "\n";
    return 0;
}