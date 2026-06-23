#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        set<int>s;
        for (int i = 0; i < n; i++)
        {
            s.insert(arr[i]);
        }
        int one=1;
        int size=s.size();
        while (one==1)
        {
            if(s.find(s.size())==s.end()){
                s.insert(s.size());
            }
            else{
                cout<<s.size()<<endl;
                one =0;
            }
        }
        
        
        
 
    }
 
 
}