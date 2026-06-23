#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    set<int> s;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        s.insert(val);
    }
 
    int max_mex = 0;
    int current_streak = 0;
    int previous_val = -2e9; 
 
    for (int val : s) {
        if (val == previous_val + 1) {
            current_streak++;
        } else {
            current_streak = 1;
        }
        max_mex = max(max_mex, current_streak);
        previous_val = val;
    }
 
    cout << max_mex << endl;
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