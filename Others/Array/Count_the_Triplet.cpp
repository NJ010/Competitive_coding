#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int count=0;
        int start,last;
        for(int i=0;i<n;i++){
            start=i+1;
            
            for(last=start+1;last<n;last++){
                if(arr[i]+arr[start]==arr[last]){
                    count++;
                    start++;
                }
                else if(arr[i]+arr[start]<arr[last]){
                    start++;
                    last--;
                }



            }
        }

            if(count==0){
                cout<<-1<<endl;

            }
            else{
            cout<<count<<endl;

    }     

}
    return 0;
}
