class Solution {
public:
    
    bool isMatch(string s, string p) {
        
        int n=s.length();
        int m=p.length();
        if(n==0 || m== 0){
            if(m==n){
                return true;
            }
            else if(n==0){
                for(int i=0;i<m;i++){
                    if(p[i]!='*'){
                        return false;
                    }
                }
                return true;
            }
        }
        bool dp[m+1][n+1];
        dp[0][0]=true;
        for(int i=1;i<=n;i++){
            dp[0][i]=false;
        }
        for(int i=1;i<=m;i++){
            if(p[i-1]=='*'  && dp[i-1][0]==true){
            dp[i][0]=true;
                }
            else dp[i][0]=false;
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s[j-1]==p[i-1]){
                    dp[i][j]=dp[i-1][j-1];
                    continue;
                }
                
                if(p[i-1]=='*'){
                    dp[i][j]=max(dp[i-1][j-1],max(dp[i-1][j],dp[i][j-1]));
                    continue;
                }
                if(p[i-1]=='?'){
                    dp[i][j]=dp[i-1][j-1];
                    continue;
                }
                else{
                    dp[i][j]=false;
                }
                // cout<<dp[i][j]<<' ';
            }
            // cout<<endl;
        }
        // for(int i=0;i<=m;i++){
        //     for(int j=0;j<=n;j++){
        //         cout<<dp[i][j]<<' '; 
        //     }
        // cout<<endl;
        // }
        return dp[m][n];
        
    }
};