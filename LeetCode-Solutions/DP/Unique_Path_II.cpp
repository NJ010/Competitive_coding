class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int rows=obstacleGrid.size();
        int col=obstacleGrid[0].size();
        int dp[rows][col];
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                dp[i][j]=0;
            }
        }
        for(int i=0;i<rows;i++){
            if(obstacleGrid[i][0]==1){
                break;
            }
            dp[i][0]=1;
        }
        for(int i=0;i<col;i++){
            if(obstacleGrid[0][i]==1){
                break;
            }
            dp[0][i]=1;
        }
        
        for(int i=1;i<rows;i++){
            for(int j=1;j<col;j++){
                if(obstacleGrid[i][j]==1){
                    dp[i][j]=0;
                }
                else{
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
               
                     }
                 }
        return dp[rows-1][col-1];
    }
};