#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            maxi=max(maxi,v[i]);
            mini=min(mini,v[i]);
        }
        int avg= (mini+maxi)/2;
        cout<<max(abs(mini-avg),abs(maxi-avg))<<endl;
    }
}