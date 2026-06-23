#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
 
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
 
        int count = 0;
 
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                continue;
            }
            else{
                count++;
                while(i < n && arr[i] != 0){
                    i++;
                }
            }
        }
 
        if(count>=2){
            cout<<2<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
}