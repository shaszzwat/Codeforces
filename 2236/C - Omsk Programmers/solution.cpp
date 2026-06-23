#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        long long a, b, x;
        cin >> a >> b >> x;
 
        long long count = abs(a - b);
 
        if(x == 1) {
            cout << count << endl;
            continue;
        }
 
        long long op = 0;
 
        while(a != b) {
            count = min(count, op + abs(a - b));
 
            if(abs(a - b) == 1) {
                op++;
                count = min(count, op);
                break;
            }
 
            if(a < b) {
                b /= x;
            } else {
                a /= x;
            }
 
            op++;
 
            count = min(count, op + abs(a - b));
        }
 
        cout << count << endl;
    }
}