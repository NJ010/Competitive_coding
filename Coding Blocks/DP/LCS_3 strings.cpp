#include<bits/stdc++.h>
using namespace std;
int main() {
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	int n=s1.length();
	int m=s2.length();
	int k=s3.length();
// 	cout<<n<<m<<k;

	int dp[n+1][m+1][k+1];
	for(int i=0;i<n+1;i++){
	    
		for(int j=0;j<m+1;j++){
		    
			for(int x=0;x<k+1;x++){
					dp[i][j][x]=0;
			}
		}
	}

	for(int i=1;i<n+1;i++){
		for(int j=1;j<m+1;j++){
			for(int x=1;x<k+1;x++){
			    
				if(s1[i-1]==s2[j-1] && s2[j-1]==s3[x-1]){
					dp[i][j][x]=dp[i-1][j-1][x-1] + 1;
				}
				else {
				    dp[i][j][x]=max (dp[i-1][j][x] , max(dp[i][j-1][x] , dp[i][j][x-1]));
				}
				// cout<<dp[i][j][k]<<"->";
			}
		}
// 		cout<<endl;
	}
	cout<< dp[n][m][k];
	return 0;
}