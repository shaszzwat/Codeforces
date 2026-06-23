#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int hash[101]={0};
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            hash[arr[i]]++;
        }
        for (int i = 0; i < 100; i++)
        {
            if(hash[i]==0){
                cout<<i<<"
";
                break;
            }
        }
        
        
        
    }
}