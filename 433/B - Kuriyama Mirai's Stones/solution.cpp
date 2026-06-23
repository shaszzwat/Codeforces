#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    vector<int> arr(n);
 
    for(int i=0;i<n;i++)
        cin >> arr[i];
 
    vector<int> sorted = arr;
    sort(sorted.begin(), sorted.end());
 
    vector<long long> pre1(n+1,0), pre2(n+1,0);
 
    for(int i=1;i<=n;i++)
    {
        pre1[i] = pre1[i-1] + arr[i-1];
        pre2[i] = pre2[i-1] + sorted[i-1];
    }
 
    int t;
    cin >> t;
 
    while(t--)
    {
        int type,l,r;
        cin >> type >> l >> r;
 
        if(type==1)
            cout << pre1[r] - pre1[l-1] << endl;
        else
            cout << pre2[r] - pre2[l-1] << endl;
    }
}