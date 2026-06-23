#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n, m, h;
    cin >> n >> m >> h;
    
    // a = current array, o = original array
    vector<long long> a(n), o(n); 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        o[i] = a[i];
    }
 
    // v = history of modified indices
    vector<int> v; 
 
    while(m--) {
        long long i, c;
        cin >> i >> c;
        i--; // Convert to 0-based index
 
        a[i] += c;
        v.push_back(i);
 
        if(a[i] > h) {
            // Crash: Restore only modified elements
            for(int x : v) a[x] = o[x];
            v.clear();
        }
    }
 
    for(int i = 0; i < n; i++) cout << a[i] << (i == n - 1 ? "" : " ");
    cout << "
";
}
 
int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--) solve();
    return 0;
}