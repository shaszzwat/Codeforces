#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count=0;
        for (int i = 0; i < s.size(); i++)
        {
            /* code */
            if(s[i]=='u'&& i-1>=0 && i+1<=s.size()-1){
                if(s[i-1]=='u'&&s[i+1]=='u'){
                    s[i-1]='s';
                    s[i+1]='s';
                    count+=2;
                }
                else if(s[i-1]=='u'){
                    s[i-1]='s';
                    count++;
                }
                else if (s[i+1]=='u')
                {
                    /* code */
                    s[i+1]='s';
                    count++;
                }
                else{
                    continue;
                }
 
                
            }
            else if(s[i]=='u'&&(i-1<0||i+1>s.size()-1)){
                s[i]='s';
                count++;
            }
            else{
                continue;
            }
        }
        cout<<count<<endl;
        
    }
}