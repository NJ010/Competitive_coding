class graph{
public :
    unordered_map<int,vector<int>> g;
    
void addedge(int a,int b,int n){
    if(a+b<n){
        g[a].push_back(a+b);
    }
    if(a-b>=0){
        g[a].push_back(a-b);
    }
    
}
bool canreach(int start,map<int,bool> &visited,vector<int> arr)
{
    
    if(arr[start]==0){
        return true;
    }
    bool ans=0;
    visited[start]=true;
  for(auto itr : g[start]){
      if(!visited[itr] && !ans){
          
           ans=ans^canreach(itr,visited,arr);
      }
  }      
 return ans;       
} 
};



class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        graph m;
        map<int ,bool> visited;
        for(int i=0;i<arr.size();i++){
            m.addedge(i,arr[i],arr.size());
            visited[i]=false;
        }
        
        return m.canreach(start,visited,arr);
    }
};