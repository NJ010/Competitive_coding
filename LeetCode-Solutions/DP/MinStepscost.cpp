class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[10000]={0};
        return min(minSteps(cost,dp,0),minSteps(cost,dp,1));
    }
    
   int minSteps(vector<int>& cost,int dp[],int i){
        if(i>=cost.size()){
            return 0; 
        }
       if(dp[i]!=0){
           return dp[i];
       }
       
       
       int opt1=minSteps(cost,dp,i+1)+cost[i];
       int opt2=minSteps(cost,dp,i+2)+cost[i];
       
       return dp[i]=min(opt1,opt2);
    }
};