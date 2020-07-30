#include <iostream>
using namespace std;
int main() {
    int n,s;
    cin>>n>>s;
    int size[n];
    int val[n];
    int dp[n][s+1];
    for(int i=0;i<n;i++){
        cin>>size[i];
        dp[i][0]=0;
    }
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    for(int i=1;i<=s;i++){
        if(size[0]<=i){
            dp[0][i]=val[0];
        }
        else{
            dp[0][i]=0;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=s;j++){
            if(size[i]<=j){
            dp[i][j]=max(dp[i-1][j],val[i]+dp[i-1][j-size[i]]);

            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=s;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<dp[n-1][s];

}
