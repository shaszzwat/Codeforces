#include<bits/stdc++.h>
using namespace std;
int main(){
    
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
int t;
cin>>t;
while(t--){
    long long x,y;
    cin>>x>>y;
    if(y>0){
        x=x-2*y;
    }
    else if(y<0){
        x=x-4*abs(y);
    }
 
    if(x%3==0 && x>=0){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
 
 
}
}