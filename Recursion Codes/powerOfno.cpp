#include <bits/stdc++.h>
using namespace std;

int power(int base, int x)
{
    if (x == 0)
    {
        return 1;
    }
    return base * power(base, x - 1);
}
int main()
{
    int base = 2;
    int x = 3;
    cout << power(base, x);
}