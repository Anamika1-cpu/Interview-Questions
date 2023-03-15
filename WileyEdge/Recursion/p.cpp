#include <bits/stdc++.h>
using namespace std;

// int fun(int n)
// {

//     int x = 1, k;

//     if (n == 1)
//         return x;

//     for (k = 1; k < n; ++k)

//         x = x + fun(k) * fun(n - k);

//     return x;
// }
// int fact(int n)

// {

//     int result;

//     if (n == 1)

//         return 1;

//     result = fact(n - 1) * 1;

//     return result;
// }

int fun(int x, int y)
{

    if (x == 0)

        return y;
    // cout << x << " " << y << endl;
    return fun(x - 1, x + y);
}
int main()
{
    // cout << fun(5);
    // cout << fact(6);
    cout << fun(4, 3);

    return 0;
}