#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
 
        if(a==b){
            cout<<0<<endl;
            continue;
            
 
        }
 
        int minus=0;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                minus=INT_MAX;
                break;
            }
            else{
                minus=minus+a[i]-b[i];
            }
        }
 
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
 
        bool flag=true;
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                flag=false;
                break;
            }
            else{
                count+=a[i]-b[i];
            }
 
        }
 
        if(!flag){
            cout<<-1<<endl;
            continue;
        }
        else{
            cout<<min(minus,count+c)<<endl;
        }
    }
}