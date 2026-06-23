#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char ch;
 
        string s;
        cin>>n;
        cin>>ch;
        cin>>s;
        s=s+s;
        int index= -1;
        int maxt=INT_MIN;
        bool green=false;
        if(ch=='g'){
            green =true;
        }
        for (int i = s.size()-2; i >= 0; i--)
        {
            /* code */
            if(s[i]=='g'){
                index=i;
            }
            else if(s[i]==ch){
                maxt=max(maxt,index-i);
 
            }
        }
        if(green){
            cout<<0<<endl;
        }
        else{
            cout<<maxt<<endl;
        }
        
 
        
    }
}