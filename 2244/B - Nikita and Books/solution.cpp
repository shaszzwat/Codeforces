#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>nums(n);
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>nums[i];
        }
 
        for(int i=0;i<n-1;i++){
            if(nums[i]==i+1){
                continue;
            }
            else{
                if(nums[i]>i+1){
                long long temp=nums[i];
                nums[i]=i+1;
                nums[i+1]=nums[i+1]+temp-nums[i];
            }
        }
        }
        bool flag=false;
 
        for(int i=0;i<n-1;i++){
            if(nums[i]>=nums[i+1]){
                flag=true;
            }
        }
        if(flag){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
        
    }
}