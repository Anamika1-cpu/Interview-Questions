#include <bits/stdc++.h>
using namespace std;
int main()

{
    string s = "mama";
    int n = s.size();
    string back = s.substr(1) + s[0];
    string forward = s.substr(n - 1) + s.substr(0, n - 1);
    cout << forward << endl;
    cout << back << endl;
    int res = back.compare(forward);
    if (res == 0)
    {
        cout << "same";
    }
    else
    {
        cout << "different" << endl;
    }
    return 0;
}