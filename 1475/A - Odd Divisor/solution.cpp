#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
 
        if ((n & (n - 1)) == 0)
            cout << "NO
";   // power of 2
        else
            cout << "YES
";  // has odd divisor > 1
    }
    return 0;
}