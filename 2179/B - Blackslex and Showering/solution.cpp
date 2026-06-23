#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    long long sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += abs(a[i] - a[i + 1]);
    }
 
    long long red = 0;
 
    red = max(red, (long long)abs(a[0] - a[1]));
    red = max(red, (long long)abs(a[n - 1] - a[n - 2]));
 
    for (int i = 1; i < n - 1; i++)
    {
        long long curr = (long long)abs(a[i] - a[i - 1]) + abs(a[i] - a[i + 1]);
        long long val = abs(a[i - 1] - a[i + 1]);
 
        long long red1 = curr - val;
        red = max(red, red1);
    }
 
    cout << sum - red << endl;
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}