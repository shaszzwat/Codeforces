#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int maxi=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            /* code */
            maxi=max(v[i],maxi);
        }
        cout<<maxi*n<<endl;
        
    }
}