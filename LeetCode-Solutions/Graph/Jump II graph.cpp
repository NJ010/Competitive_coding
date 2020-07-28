class graph{
public :
    map<int,vector<int>> g;
    
void addedge(int a,int b,int n){
    for(int i=1;i<=b;i++){
        if(a+i<n){
        g[a].push_back(a+i);
    }
    }
    
}
    int bfs(int start,int end){
         int  dist[end];
        bool visited[end];
        for(int i=0;i<end;i++){
            dist[i]=INT_MAX;
            visited[i]=false;
        }
        dist[0]=0;
    
    for(auto nbr : g){
        int parent=nbr.first;
        vector <int> itr=nbr.second;
        for(auto it:itr){
            if(!visited[it]){
                visited[it]=true;
            // cout<<it<<' '<<dist[it]<<' '<<dist[parent]<<endl;
            if(dist[it]>dist[parent]+1){
                dist[it]=dist[parent]+1;
            }
            }
        }
    }
    return dist[end-1];
    }

};

class Solution {
public:
    int jump(vector<int>& nums) {
        graph m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m.addedge(i,nums[i],n);
        }
       
        
        return m.bfs(0,n);
        
    }
};