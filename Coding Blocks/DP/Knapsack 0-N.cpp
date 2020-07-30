#include <iostream>
using namespace std;
int main() {
    int n,s;
    cin>>n>>s;
    int size[n];
    int val[n];
    int dp[s+1];
    for(int i=0;i<n;i++){
        cin>>size[i];
    }
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    for(int i=0;i<=s;i++){
        dp[i]=0;
    }
    for(int i=0;i<=s;i++){
        int target=i;
        for(int j=0;j<n;j++){
            if(size[j]<=target){
             dp[i]=max(dp[i],val[j]+dp[i-size[j]]);
            }
        }
    }
    // for(int i=0;i<=s;i++){
    //     cout<<dp[i]<<" ";
    // }
	cout<<dp[s];

}
