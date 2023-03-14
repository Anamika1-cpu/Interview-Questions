#include <bits/stdc++.h>
using namespace std;
void removeSpecialCharacter(string s)
{
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z')
        {

            s.erase(i, 1);
            i--;
        }
    }
    cout << s;
}
// driver code
int main()
{
    string s = "A6@!nami--'[ka";
    removeSpecialCharacter(s);
    return 0;
}