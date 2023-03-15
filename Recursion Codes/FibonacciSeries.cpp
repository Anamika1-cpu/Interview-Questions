#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int num, i = 0;
    cin >> num;
    while (i < num)
    {
        cout << fibonacci(i) << " ";
        i++;
    }
    return 0;
}