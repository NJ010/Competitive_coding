#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    int ab=1;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    int max_yet=0;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0,j=1;i<n;i++,j++){
        if(j==n){
            if(arr[i]>max_yet){
                ans++;
            }
        }
        if(arr[i]>arr[j] && arr[i]>max_yet){
            ans++;
        }
        max_yet=max(max_yet,arr[i]);
        
    }
    
    
    
    cout<<"Case #"<<ab++<<": "<<ans<<endl; 
    }
}
