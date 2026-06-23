#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int y=0,n=0;
        for (int i = 0; i < s.size(); i++)
        {
            /* code */
            if(s[i]=='Y'){
                y++;
            }
            else{
                n++;
            }
        }
        if(y>=2){
            cout<<"NO"<<endl;
        }
        else if(y==1&&n>=1){
            cout<<"YES"<<endl;
        }
        else if(y==0&&n>=2){
            cout<<"YES"<<endl;
        }
 
        
    }
}