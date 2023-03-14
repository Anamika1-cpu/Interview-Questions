#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "naman";
    int same = 1;
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            same = 0;
            break;
        }
    }
    if (same == 0)
    {
        cout << s << " "
             << "Not Palindrome" << endl;
    }
    else
    {
        cout << "Palindrome";
    }
    return 0;
}