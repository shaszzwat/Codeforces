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
 
        long long slices = 0;
        while (n > 2) {
            long long m1 = n / 3;        // Hao eats smallest group
            long long m3 = n / 3+(n%3);  // Remaining = ceil(n/3)
            slices += m1;
            n = m3;
        }
 
        cout << slices << "
";
    }
    return 0;
}