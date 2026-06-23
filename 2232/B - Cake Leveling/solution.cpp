#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<long long>pre(n);
        pre[0]=v[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+v[i];
        }
        for(int i=0;i<n;i++){
            pre[i]=pre[i]/(i+1);
        }
        vector<long long>ans(n);
        ans[0]=v[0];
        for(int i=1;i<n;i++){
            ans[i]=min(ans[i-1],pre[i]);
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
 
    }
 
}