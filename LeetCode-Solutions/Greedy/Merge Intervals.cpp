class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        if(arr.size()<=1){
            return arr;
        }
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int start;
        int last;
        vector<int> par;
        start=arr[0][0];
        last=arr[0][1];
        par.push_back(start);
        for(int i=1;i<arr.size();i++){
            if(arr[i][0]>last){
                par.push_back(last);
                ans.push_back(par);
                par.clear();
                par.push_back(arr[i][0]);
                start=arr[i][0];
                last=max(arr[i][1],last);
            }
            else{
                last=max(arr[i][1],last);
            }

            
        }
        par.clear();
        par.push_back(start);
        par.push_back(last);
        ans.push_back(par);
        return ans;
    }
};