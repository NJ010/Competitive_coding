#include<bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    for(int i=m-1;i>=0;i--){
        int last=arr1[n-1];
        for(int j=n-2 ;j>=0,arr1[j]>arr2[i];j--){
            arr1[j+1]=arr1[j];
            if(j!=m-2 || last>arr2[i]){
                arr1[j+1]=arr2[i];
                arr2[i]=last;           
                }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<' ';
    }
    for(int i=0;i<m;i++){
        cout<<arr2[i]<<' ';
    }
}
    return 0;
}