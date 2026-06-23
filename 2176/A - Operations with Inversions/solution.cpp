#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int marked[n]={0};
        int count=0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            for (int j = i+1; j < n; j++)
            {
                /* code */
                if(arr[i]>arr[j]&&marked[j]==0&&marked[i]==0){
                    marked[j]=1;
                    count++;
                }
            }
            
 
        }
        cout<<count<<endl;
        
    }
}