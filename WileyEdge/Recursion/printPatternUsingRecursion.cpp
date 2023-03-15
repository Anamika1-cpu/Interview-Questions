// We take a number K from the user.
// Then we take a fixed no by which we recursively reduce the number K
// one by one until we reach a negative or 0.
// After we reach 0 or negative, we start adding the same fixed no until we reach K.

// Input: K = 16  (Fixed no = 3)
// Output: 16, 13, 10, 7, 4, 1, -2, 1, 4, 7, 10, 13, 16
// Input: K = 10 (Fixed no = 5)
// Output: 10, 5, 0, 5, 10

#include <bits/stdc++.h>
using namespace std;

void pattern(int n, int fixed)
{
    if (n == 0 || n < 0)
    {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    pattern(n - fixed, fixed);
    cout << n << " ";
}

// OR

int main()
{
    int n, fixed;
    cin >> n >> fixed;
    pattern(n, fixed);
    return 0;
}