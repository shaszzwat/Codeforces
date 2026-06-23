#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
 
        long long mx = 0, mn = 0; // initial score options
 
        for(int i = 0; i < n; i++) {
            long long r1 = mx - a[i];
            long long r2 = mn - a[i];
            long long b1 = b[i] - mx;
            long long b2 = b[i] - mn;
 
            long long new_mx = max({r1, r2, b1, b2});
            long long new_mn = min({r1, r2, b1, b2});
 
            mx = new_mx;
            mn = new_mn;
        }
 
        cout << mx << "
";
    }
}