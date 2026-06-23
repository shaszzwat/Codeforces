#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;
 
        vector<pair<int,int>> dirs = {
            { a,  b}, { a, -b}, {-a,  b}, {-a, -b},
            { b,  a}, { b, -a}, {-b,  a}, {-b, -a}
        };
 
        set<pair<int,int>> king, queen;
 
        for (auto d : dirs) {
            king.insert({xk + d.first, yk + d.second});
            queen.insert({xq + d.first, yq + d.second});
        }
 
        int ans = 0;
        for (auto pos : king) {
            if (queen.count(pos)) ans++;
        }
 
        cout << ans << '
';
    }
}