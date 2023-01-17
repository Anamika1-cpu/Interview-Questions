#include <bits/stdc++.h>
using namespace std;

int getHCF(int n1, int n2)
{
    if (n1 == 0)
    {
        return n2;
    }
    if (n2 == 0)
    {
        return n1;
    }
    if (n1 == n2)
    {
        return n1;
    }
    if (n1 > n2)
    {
        return getHCF(n1 - n2, n2);
    }
    return getHCF(n1, n2 - n1);
}

int main()
{
    int n1 = 3, n2 = 4;
    int hcf = 1;
    hcf = getHCF(n1, n2);

    cout << hcf << endl;
    return 0;
}