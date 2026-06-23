#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first>b.first;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int,int>> v;
        vector<int> ans;
        int x;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> x;
            v.push_back({x,i+1});
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            v[i].first=v[i].first%k;
            if (v[i].first==0)
            {
                /* code */v[i].first=k;
            }
            
        }
        sort(v.begin(),v.end(),comp);
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<v[i].second<<" ";
        }
        cout<<endl;
        
        
 
        
        }
        
        
    }