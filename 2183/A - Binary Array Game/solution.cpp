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
        /* code */
        cin>>arr[i];
    }
    int one=0,zero=0;
    for (int i = 1; i < n; i++)
    {
        /* code */
        if(arr[i]==1)one++;
        else{zero++;}
    }
    if(arr[0]==1||arr[n-1]==1){
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Bob"<<endl;
            }
    
    }
    
 
}