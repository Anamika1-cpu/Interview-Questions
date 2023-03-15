#include <bits/stdc++.h>
using namespace std;

int reverse(int n, int temp)
{
    if (n == 0)
    {
        return temp;
    }
    temp = (temp * 10) + (n % 10);
    return reverse(n / 10, temp);
}
int main()
{
    int n = 121231;
    int temp = reverse(n, 0);

    if (temp == n)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "NOT Palindrome" << endl;
    }
    return 0;
}