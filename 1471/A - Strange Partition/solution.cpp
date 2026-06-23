#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>arr[i];
        }
        long long max=0;
        long long sum=0;
 
        for (int i = 0; i < n; i++)
        {
            /* code */
            max+=(arr[i]+x-1)/x;
            sum+=arr[i];
            
        }
        cout<<(sum+x-1)/x<<" "<<max<<endl;
        
        
    }
}