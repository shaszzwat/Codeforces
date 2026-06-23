#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
 
        long long k = 0;
        for(int i = 0; i < n - 1; i++){
            if(v[i] > v[i+1]){
                k = max(k, v[i] - v[i+1]);
            }
        }
 
        vector<long long>neww(n);
        neww[0]=v[0];
        
        for(int i=1;i<n;i++){
            if(v[i] >= neww[i-1]){
                neww[i] = v[i];
            }
            else {
                neww[i] = v[i] + k;
            }
        }
 
        vector<long long>sorted=neww;
        sort(sorted.begin(),sorted.end());
        if(sorted==neww){
            cout<<"YES"<<"
";
        }
        else{
            cout<<"NO"<<"
";
        }
    }
    return 0;
}