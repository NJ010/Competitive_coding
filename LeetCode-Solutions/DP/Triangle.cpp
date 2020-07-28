class Solution {
public:
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int rows=triangle.size();
        int cols=triangle[triangle.size()-1].size();
         int dp[rows][cols];
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(j<=i){
                    dp[i][j]=0;
                }
            }
        }
        for(int i=0;i<cols;i++){
            dp[rows-1][i]=triangle[rows-1][i];
        }
        for(int i=rows-2;i>=0;i--){
            for(int j=0;j<cols;j++){
                if(j>i){
                    break;
                }
                dp[i][j]=min(dp[i+1][j],dp[i+1][j+1])+triangle[i][j];
            }
        }
        return dp[0][0];
        
        
    }
    
};