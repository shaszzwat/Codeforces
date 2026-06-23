#include <iostream>
#include <algorithm>
using namespace std;
 
bool can_form_square(int l1, int b1, int l2, int b2, int l3, int b3) {
    pair<int, int> R[3] = {{l1, b1}, {l2, b2}, {l3, b3}};
    
    sort(R, R + 3);  // sort to try fewer cases (optional but helps)
 
    do {
        int a = R[0].first, A = R[0].second;
        int b = R[1].first, B = R[1].second;
        int c = R[2].first, C = R[2].second;
 
        // Case 1: All same height, side by side
        if (A == B && B == C && (a + b + c == A)) return true;
 
        // Case 2: All same width, stacked
        if (a == b && b == c && (A + B + C == a)) return true;
 
        // Case 3: Largest rectangle on top, other two below side by side
        if (A + max(B, C) == a && b + c == a && B == C) return true;
 
        // Case 4: Two on top side by side, third below (same width)
        if (A == B && a + b == c && max(A, B) + C == c) return true;
 
        // Case 5: First on left, others stacked on right
        if (A == B + C && max(b, c) + a == A && b == c) return true;
 
    } while (next_permutation(R, R + 3));
 
    return false;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
 
        if (can_form_square(l1, b1, l2, b2, l3, b3)) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
    return 0;
}