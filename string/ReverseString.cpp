#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hihihih";
    string original = s;
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        int temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }
    cout << s << " " << original;
    return 0;
}