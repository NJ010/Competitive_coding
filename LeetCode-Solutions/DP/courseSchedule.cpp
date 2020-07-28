class graph{
    
    public:
    
    unordered_map<int,vector<int>>g;
    
    
    void addedge(int a ,int b){
        g[a].push_back(b);
    }
    
    bool helper(bool *visited,int parent,int node ,bool *stack){
      
        visited[node] = true;
        stack[node]=true;
        for(auto nbr:g[node]){
            if(stack[nbr]==true){
            return true;
            }
            if(!visited[nbr]){
                bool cyclefound= helper(visited,node,nbr,stack);
            if(cyclefound){
                return true;
            }
                
            }
         
    }
        stack[node]=false;
        return false;
    }
        
        
        
    
    bool ispossible(int n){
        bool *visited=new bool[n];
        bool *stack=new bool[n];

        for(int i=0;i<n;i++){
            visited[i]=false;
            stack[i]=false;
        }
        for(auto itr : g){
            bool pos= helper(visited,-1,itr.first,stack);
            if(pos==true){
                return false;
            }
        }    
        return true;
    }
};

class Solution {
public:
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
         graph m;
       int n =prerequisites.size();
        for(int i=0;i<n;i++){
            m.addedge(prerequisites[i][0],prerequisites[i][1]);
        }
        return m.ispossible(numCourses);
    }
};