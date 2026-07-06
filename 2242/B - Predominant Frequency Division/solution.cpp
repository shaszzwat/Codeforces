#include<bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> p1(n + 1, 0), p2(n + 1, 0), p3(n + 1, 0), d(n + 1, 0);
 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        p1[i + 1] = p1[i] + (a[i] == 1);
        p2[i + 1] = p2[i] + (a[i] == 2);
        p3[i + 1] = p3[i] + (a[i] == 3);
        d[i + 1] = p1[i + 1] + p2[i + 1] - p3[i + 1];
    }
 
    vector<int> mx(n + 1, -1e9);
    for (int j = n - 1; j >= 1; --j) {
        mx[j] = max(mx[j + 1], d[j]);
    }
 
    for (int i = 1; i <= n - 2; ++i) {
        if (p1[i] >= p2[i] + p3[i]) {
            if (mx[i + 1] >= d[i]) {
                cout << "YES
";
                return;
            }
        }
    }
    cout << "NO
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
 