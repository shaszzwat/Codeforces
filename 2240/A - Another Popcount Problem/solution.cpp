#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        int ans = 0;
 
        for (int cost = 1; cost <= n; cost *= 2) {
 
            
            int take = min(k, n / cost);
 
            ans += take;
            n -= take * cost;
        }
 
        cout << ans << "
";
    }
 
    return 0;
}