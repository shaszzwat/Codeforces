#include <iostream>
#include <set>
#include <tuple> // for std::tuple
using namespace std;
 
int simulate(int s, int x, int y, int dx, int dy) {
    set<tuple<int, int, int, int>> visited;
 
    while (true) {
        // Check if ball is at any of the 4 pockets
        if ((x == 0 || x == s) && (y == 0 || y == s)) {
            return 1;  // Ball potted
        }
 
        tuple<int, int, int, int> state = make_tuple(x, y, dx, dy);
        if (visited.count(state)) {
            return 0;  // Ball enters a cycle, never potted
        }
        visited.insert(state);
 
        // Time until next bounce
        int tx = (dx == 1) ? s - x : x;
        int ty = (dy == 1) ? s - y : y;
        int t = min(tx, ty);
 
        x += dx * t;
        y += dy * t;
 
        // Bounce logic
        if (x == 0 || x == s) dx = -dx;
        if (y == 0 || y == s) dy = -dy;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        int count = 0;
        for (int i = 0; i < n; ++i) {
            int dx, dy, x, y;
            cin >> dx >> dy >> x >> y;
            count += simulate(s, x, y, dx, dy);
        }
        cout << count << "
";
    }
 
    return 0;
}