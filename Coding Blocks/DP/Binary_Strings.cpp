#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dp[2][n];
		dp[0][0]=1;
		dp[1][0]=1;
		for(int i=1;i<n;i++){
			
				
				dp[0][i]=dp[0][i-1]+dp[1][i-1];
			
				dp[1][i]=dp[0][i-1];
			
		}
			cout<< dp[0][n-1] + dp[1][n-1]<<endl;
	}
	return 0;
}