#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    if (n < 10)
    {
        cout << n;
        return 0;
    }
    else
    {
        cout << n % 10;
        reverse(n / 10);
    }
}
int main()
{
    int n = 12790;
    reverse(n);
    return 0;
}