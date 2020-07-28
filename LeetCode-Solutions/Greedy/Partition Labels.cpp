class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int>ans;
        int s=-1;
        int l=0;
        
        unordered_map<char,pair<int,int>>m;
        for(int i=0;i<26;i++){
            m['a'+i]={INT_MAX,INT_MIN};
        }
        for(int i=0;i<S.length();i++){
            
            int start=m[S[i]].first;
            int last=m[S[i]].second;
            if(i<start){
                m[S[i]].first=i;
            }
            if(i>last){
                m[S[i]].second=i;
            }
        }

        // for(auto itr:m){
        //     cout<<itr.first<<"->"<<itr.second.first<<" "<<itr.second.second<<endl;;
        // }
        
        
        for(int i=0;i<S.length();i++){
            if(m[S[i]].second>l){
                l=m[S[i]].second;
            }
            if(i==l){
                ans.push_back(l-s);
                s=l;
            }
            
                
            
        }
        return ans;
    }
};