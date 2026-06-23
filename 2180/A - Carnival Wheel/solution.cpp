#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, a, b;
        cin >> l >> a >> b;
 
        vector<bool> visited(l, false);
        int curr = a;
        int ans = a;
 
        while (!visited[curr]) {
            visited[curr] = true;
            ans = max(ans, curr);
            curr = (curr + b) % l;
        }
 
        cout << ans << '
';
    }
}