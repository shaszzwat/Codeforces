#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>arr[i];
        }
        int left,right;
        left=0;
        right=0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if(arr[i]>a){
                right++;
            }
            if (arr[i]<a)
            {
                left++;
                /* code */
            }
           
        }
        if (right>left)
        {
            /* code */
            cout<<a+1<<endl;
        }
        else if (left>right)
        {
            /* code */
            cout<<a-1<<endl;
        }
        else{
            cout<<a-1<<endl;
        }
        
        
 
        
        
    }
}