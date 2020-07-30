class Solution {
public:
    long long dp[100][90000]={0};
    int numDistinct(string s, string t) {
        
        int n=s.length();
        int m=t.length();
        if(n==0 || m==0){
            return 0;
        }
        if(s[0]==t[0]){
            dp[0][0]=1;
        }
        for(int i=1;i<n;i++){
            if(t[0]==s[i]){
                dp[0][i]=dp[0][i-1]+1;
            }
            else{
                dp[0][i]=dp[0][i-1];
            }
        }
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                
                if(t[i]==s[j]){
                    dp[i][j] = dp[i][j-1] + dp[i-1][j-1];
                    }
                else{
                    dp[i][j] = dp[i][j-1];
                    }
                // cout<<dp[i][j]<<' ';
            }
            // cout<<endl;
        }
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
                
//                 cout<<dp[i][j]<<' ';
//             }
//             cout<<endl;
//         }
        return dp[m-1][n-1];
        
    }
};