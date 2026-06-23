#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>v[i];
    }
    int sum=0;
    int ans=0;
    for(int i=0;i<k;i++){
        sum=sum+v[i];
    }
    int lindex=0;
    int minisum=sum;
    for(int i=k;i<n;i++){
        sum=sum-v[lindex];
        sum=sum+v[i];
        if(sum<minisum){
            minisum=sum;
            ans=lindex+2;
        }
        lindex++;
 
    }
    if(ans==0){
        cout<<1;
    }
    else{
        cout<<ans;
    }
 
    
}