class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
            int diff=INT_MAX-1234;
        for(int i=0;i<n;i++){
            int start=i+1;
            int end=n-1;
            while(end>start){
                int sum=nums[i]+nums[start]+nums[end];
                if(sum==target){
                    return sum;
                }
                if(abs(sum-target)<=abs(diff-target)){
                    diff=sum;
                }
                if(sum<target){
                    start++;
                }
                else{
                    end--;
                }               
            }
            
        }
        return diff;
        
        
            
        
        
    }
};