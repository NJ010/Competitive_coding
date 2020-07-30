class Solution {
public:
    static bool comp(pair<int,int>& a,pair<int,int>& b){
        return a.first*a.second>b.first*b.second;
    }
    int maxEnvelopes(vector<vector<int>>& A) {
        vector<pair<int,int>> v;
        int n=A.size();
        if(n==0)    return 0;
        for(auto& x:A){
            v.push_back({x[0],x[1]});
        }
        sort(v.begin(),v.end(),comp);
        int ans=1;
        vector<int> dp(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(v[i].first<v[j].first && v[i].second<v[j].second && 1+dp[j]>dp[i]){
                    dp[i]=1+dp[j];
                    ans=max(ans,dp[i]);
                }
            }
        }
        return ans;
    }
};