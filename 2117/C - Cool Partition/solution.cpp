#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int part=0;
        set<int>prev,total;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            
        }
        for(int i=0;i<n;i++){
            total.insert(v[i]);
            prev.erase(v[i]);
            if(prev.size()==0){
                part++;
                prev=total;
            }
        }
        cout<<part<<endl;
       
    }
}