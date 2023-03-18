#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, int> p1, pair<int, int> p2)
{
    double v1 = (double)p1.first / p1.second;
    double v2 = (double)p2.first / p2.second;
    return (v1 > v2);
    // first value hai second weight hai
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    int w;
    cin >> w;
    sort(v.begin(), v.end(), compare);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (w >= v[i].second)
        {
            ans += v[i].first;
            w -= v[i].second;
            continue;
        }
        double vw = (double)v[i].first / v[i].second;
        ans += vw * w;
        w = 0;
        break;
    }
    cout << ans << endl;
}