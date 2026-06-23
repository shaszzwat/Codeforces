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
        string ans = "";
        ans=ans+s[0];
        if (n > 2)
        {
            for (int i = 1; i < n - 1; i += 2)
            {
                /* code */
                ans = ans + s[i];
            }
        }
        if(n>1){
            ans=ans+s[n-1];
        }
        cout << ans << endl;
    }
}