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
        sort(v.begin(),v.end());
        int mid;
        if(n%2==0){
            mid=n/2 +(n/2)+1;
        }
        else{
            mid=n/2;
        }
        int count=0;
        for(int i=0;i<n/2;i++){
            int start=v[i];
            int end=v[n-i-1];
            if(start==end){
                continue;
            }
            else{
                count++;
            }
        }
        cout<<count<<endl;
    }
}