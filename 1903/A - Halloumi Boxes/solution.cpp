#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>arr[i];
        }
        
        bool sorted=true;
        for (int i = 0; i < n-1; i++)
        {
            /* code */
            if(arr[i]>arr[i+1]){
                sorted=false;
                break;
            }
        }
        
        
        if (sorted||k>=2)
        {
            /* code */
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
}