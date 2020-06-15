class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[10000000]={0};
        
        if (minCoins(coins,amount,dp)>amount){
            return -1;
        }
         return minCoins(coins,amount,dp);
        
    }
    
    
   int minCoins(vector<int>& coins, int amount,int dp[]){
        if(amount==0){
            return 0;
        }
       if(amount<0){
           return -1;
       }
        if(dp[amount]!=0){
            return dp[amount];
        }
       int ans=INT_MAX-1;
       for(int i=0;i<coins.size();i++){
           if(amount-coins[i]>=0){
           int a=minCoins(coins,amount-coins[i],dp);
           if(a!=-1){
           ans=min(ans,a+1);
           }}
       }
       dp[amount]=ans;
       return ans;
    }
};