#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x=0;
    while(t--){
        string s;
        cin>>s;
        for (int i = 0; i < s.size(); i++)
        {
            /* code */
            if(s[i]=='+'){
                i++;
                x++;
            }
            else if(s[i]=='-'){
                i++;
                x--;
            }
            else{
                continue;
            }
        }
        
 
    }
    cout<<x;
}