ans.push_back(i);class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> mp;
        vector<int >ans;
        for(int i=0;i<nums.size();i++){
           
                if(mp.count(target-nums[i])>0){
                    if(mp[target-nums[i]]>i){
                        ans.push_back(i);
                        ans.push_back(mp[target-nums[i]]);
                    }
                    else{
                        ans.push_back(mp[target-nums[i]]);
                        ans.push_back(i);
                    }
                }
                 else{
                     mp[nums[i]]=i;
                 }   
                    
                
            
        }
        return ans;
    }
};