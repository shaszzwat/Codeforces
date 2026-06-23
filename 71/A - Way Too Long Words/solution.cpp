#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int letter=0;
        bool islong=false;
    
        if (n>10){
            letter=n-2;
            islong=true;
 
        }
        if(islong){
            cout<<s[0]<<letter<<s[n-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
 
    }
}