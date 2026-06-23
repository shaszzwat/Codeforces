#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
 
        int count = 0;
        int forced = 0; // how many classes we must stay awake
 
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                forced = k; // After this class, next k classes forced awake
            }
            else { // s[i] == '0'
                if(forced > 0){
                    forced--; // can't sleep because forced awake
                } else {
                    count++; // allowed to sleep
                }
            }
        }
 
        cout << count << "
";
    }
}