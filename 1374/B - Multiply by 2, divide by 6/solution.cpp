#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        int count = 0;
        bool ok = false;
 
        if (n == 0) {
            cout << -1 << endl;
        }
        else if (n == 1) {
            cout << 0 << endl;
        }
        else {
            while (n % 3 == 0) {
                if (n % 2 == 1 || n % 6 != 0) {
                    n = n * 2;
                    count++;
                }
                else if (n % 6 == 0) {
                    n = n / 6;
                    count++;
                }
 
                if (n == 1) {
                    ok = true;
                    break;
                }
            }
 
            if (ok) {
                cout << count << endl;
            }
            else {
                cout << -1 << endl;
            }
        }
    }
}