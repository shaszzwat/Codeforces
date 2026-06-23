#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int zero=0;
        int one=0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (s[i]=='0')
            {
                /* code */
                zero++;
            }
            else{
                one++;
            }
            
 
        }
        int valid=min(zero,one);
        
        if(2*valid%4==0||2*valid%4==1){
            cout<<"NET"<<endl;
        }
        else{
            cout<<"DA"<<endl;
        }
    }
}