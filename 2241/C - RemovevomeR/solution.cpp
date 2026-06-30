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
 
        string s;
        cin >> s;
 
        int trans = 0;
 
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                trans++;
            }
        }
 
        int mini;
 
        if (trans == 1)
            mini = 2;
        else
            mini= 1;
 
        cout << mini << "
";
    }
 
    return 0;
}