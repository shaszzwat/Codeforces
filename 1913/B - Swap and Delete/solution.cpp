#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int cnt0 = 0;
        int cnt1 = 0;
        int valid = 0;
 
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (s[i] == '0')
            {
                /* code */
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (s[i] == '0' && cnt1 != 0)
            {
                valid++;
                cnt1--;
            }
            else if (s[i] == '1' && cnt0 != 0)
            {
                valid++;
                cnt0--;
            }
            else
            {
                break;
            }
        }
        cout << n - valid << endl;
    }
}