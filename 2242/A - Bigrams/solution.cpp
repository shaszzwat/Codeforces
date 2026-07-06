#include<bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int k;
    cin >> k;
    vector<int> c(k);
    int total = 0;
    int pairs = 0;
    bool has_three = false;
 
    for (int i = 0; i < k; ++i) {
        cin >> c[i];
        total += c[i];
        if (c[i] >= 3) {
            has_three = true;
        }
        if (c[i] >= 2) {
            pairs++;
        }
    }
 
   
    if (total < 3) {
        cout << "NO
";
        return;
    }
 
   
    if (has_three || pairs >= 2) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
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