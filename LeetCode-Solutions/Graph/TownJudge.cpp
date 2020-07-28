class graph{
    map<int,vector<int>>l;
    int n;
    public:
    graph(int a){
        n=a;
    }
    void addedge(int a,int b){
        l[a].push_back(b);
    }
    
    int findjudge(){
        int trust[n+1];
        for(int i=0;i<=n;i++){
            trust[i]=0;
        }
        for(auto itr:l){
            vector<int>nbr=itr.second;
            for(auto nb:nbr){
                trust[nb]++;
            }
            }
        for(int i=1;i<=n;i++){
            if(trust[i]==n-1 && !l.count(i)){
                return i;
            }
            
        }
        return -1;
        }
    };


class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        graph g(N);
        for(int i=0;i<trust.size();i++){
            g.addedge(trust[i][0],trust[i][1]);
        }
        return g.findjudge();
    }
};