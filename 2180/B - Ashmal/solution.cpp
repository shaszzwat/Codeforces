#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        vector<string> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        string s = "";
        for (int i = 0; i < n; i++) {
            string left = a[i] + s;
            string right = s + a[i];
            s = min(left, right);
        }
 
        cout << s << '
';
    }
    return 0;
}