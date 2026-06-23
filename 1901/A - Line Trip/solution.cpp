#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
 
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
 
        int b = arr[0] - 0;
        int c = 2 * (k - arr[n - 1]);
 
        int maxGap = 0;
        for (int i = 0; i < n - 1; i++)
        {
            maxGap = max(maxGap, arr[i + 1] - arr[i]);
        }
 
        int maxval = max({b, c, maxGap});
        cout << maxval << endl;
    }
 
    return 0;
}