#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                count++;
            }
 
        }
        for(int i=0;i<n-k;i++){
            if(s[i]=='1'){
                if(s[i+k]=='1'){
                    count=count-2;
                    s[i]='0';
                    s[i+k]='0';
                }
                else{
                    s[i]='0';
                    s[i+k]='1';
 
                }
            }
        }
        if(count==0){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
 
 
        
    }
}
 
 
 
 