#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    long long k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    vector<int> c;
    int curr_len = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] == a[i - 1]) {
            curr_len++;
        } else {
            c.push_back(curr_len);
            curr_len = 1;
        }
    }
    c.push_back(curr_len);
 
    vector<int> freq(n + 1, 0);
    for (int size : c) {
        freq[size]++;
    }
 
    vector<int> v;
    for (int i = 1; i <= n; ++i) {
        if (freq[i] > 0) {
            v.push_back(i);
        }
    }
 
    long long ans = 0;
    long long cnt = c.size();
    long long sum = n;
 
    for (int j = 0; j < v.size(); ++j) {
        if ((k - sum) % cnt == 0) {
            long long x = (k - sum) / cnt;
            if (x >= 1 - v[j]) {
                ans++;
            }
        }
 
        cnt -= freq[v[j]];
        sum -= 1LL * freq[v[j]] * v[j];
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