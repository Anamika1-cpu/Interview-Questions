#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int len = 0;
    long long int temp = n;
    while (temp > 0)
    {
        temp /= 10;
        len++;
    }

    long long lasdigits = 0;
    long long int ans = n * n * n * n;
    int power = 1;
    // last digits
    while (len)
    {
        int r = ans % 10;
        ans /= 10;
        len--;
        lasdigits = lasdigits + r * power;
        power = power * 10;
    }
    if (n == lasdigits)
    {
        cout << "TRUE" << endl;
    }
    else
    {
        cout << "FALSE" << endl;
    }
    return 0;
}