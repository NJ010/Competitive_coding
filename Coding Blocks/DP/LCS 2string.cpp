#include<bits/stdc++.h>
using namespace std;
int main() {
	string s1,s2;
	cin>>s1>>s2;
	int dp[s1.length()+1][s2.length()+1];
	for(int i=0;i<=s2.length();i++){
		dp[0][i]=0;
	}
	for(int i=0;i<=s1.length();i++){
		dp[i][0]=0;
	}
	for(int i=1;i<=s1.length();i++){
		for(int j=1;j<=s2.length();j++){
			if(s2[j-1]==s1[i-1]){
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else{
				dp[i][j]=max( dp[i-1][j], dp[i][j-1]);
			}
			
		}
	}
	// for(int i=0;i<=s1.length();i++){
	// 	for(int j=0;j<=s2.length();j++){
	// 		cout<<dp[i][j]<<' ';
			
	// 	}
	// 	cout<<endl;
	// }
	stack<char>s;
	int ans=dp[s1.length()][s2.length()];
	// cout<<ans;
	int i=s1.length();
	int j=s2.length();
	while(ans){
		if(s1[i-1]==s2[j-1]){
		    s.push(s1[i-1]);
		    i=i-1;
		    j=j-1;
		    ans--;
		}
		else{
		    if(dp[i-1][j]>dp[i][j-1]){
		        i--;
		    }
		    else{
		        j--;
		    }
		}
	}
	while(!s.empty()){
	    char x=s.top();
	    s.pop();
	    cout<<x;
	}

	return 0;
}#include <iostream>
using namespace std;
int main() {
    cout<<"Hello World!";
}
