#include <iostream>
 
using namespace std;
 
const int MOD = 998244353;
 
long long power(long long b, long long p) {
    long long ans = 1;
    b %= MOD;
    while (p > 0) {
        if (p % 2 == 1) ans = (ans * b) % MOD;
        b = (b * b) % MOD;
        p /= 2;
    }
    return ans;
}
 
void solve() {
    long long n, m, r, c;
    cin >> n >> m >> r >> c;
    
    long long cells = n * m;
    long long eqs = (n - r + 1) * (m - c + 1);
    long long freeBits = cells - eqs;
    
    cout << power(2, freeBits) << "
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