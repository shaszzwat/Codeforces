#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int maxi=0;
        int curr=0;
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                curr++;
                maxi=max(maxi,curr);
            }
            else{
                curr=0;
            }
        }
        if(maxi==0){
            cout<<0<<endl;
            continue;
        }
        if(maxi==1 || maxi==2){
            cout<<1<<endl;
            continue;
        }
 
        cout<<(maxi+1)/2<<endl;
    }
}