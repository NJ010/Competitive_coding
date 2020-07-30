#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k,c;
	cin>>n>>k>>c;
	int a[n],b[k];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	for(int i=0;i<k;i++){
	    cin>>b[i];
	}
	int dp[n+1][k+1][c+1];
	
	for(int i=0;i<=n;i++){
	    for(int j=0;j<=k;j++){
	        for(int m=0;m<=c;m++){
	            dp[i][j][m]=0;
	        }
	    }
	}
	for(int m=1;m<=c;m++){
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=k;j++){
	        if(a[i-1]==b[j-1]){
	            
	            dp[i][j][m]=max(dp[i-1][j][m], max( dp[i][j-1][m] , dp[i-1][j-1][m]+1));
	        }
	        else{
	            dp[i][j][m]=max(dp[i-1][j][m], max( dp[i][j-1][m] , dp[i-1][j-1][m-1]+1));
	        }
	            
	        }
	    }
	}
	cout<<dp[n][k][c];
	
	return 0;
}