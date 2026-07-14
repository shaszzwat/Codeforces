#include<bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<long long> a(n + 1), p(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        p[i] = p[i - 1] + a[i];
    }
    
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    sort(b.begin(), b.end());
    
    long long ans = 0;
    int k = 0;
    
    for (int i = 0; i < m; i++) {
        int l = k + 1;
        int r = b[i];
        long long s = p[r] - p[l - 1];
        ans += max(s, -s);
        k = r;
    }
    
    if (k < n) {
        ans += (p[n] - p[k]);
    }
    
    cout << ans << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}