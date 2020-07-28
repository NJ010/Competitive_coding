#include <iostream>
using namespace std;
int main() {
    cout<<"Hello World!";
}class Solution {
public:
    vector<int> par;
    
    void initialize(int n){
        par.resize(n+1);
        for(int i=0;i<=n;i++){
            par[i]=i;
        }
    }
    int get_sup(int a){
        if(a==par[a]){
            return a;
        }
        // cout<<1;
        return get_sup(par[a]);
    }
    void unite(int a,int b){
        int sa=get_sup(a);
        int sb=get_sup(b);
        
        par[sa]=sb;
    }
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int m=0;
        for(int i=0;i<edges.size();i++){
            m=max(edges[i][0],max(edges[i][1],m));
        }
    
    vector<int> index;
    initialize(m);
    for(int i=0;i<edges.size();i++){
        if(get_sup(edges[i][0])!=get_sup(edges[i][1])){
            // cout<<get_sup(edges[i][0])<<endl<<get_sup(edges[i][1])<<" ";
            unite(edges[i][0],edges[i][1]);
        }
        else {
            // cout<<2;
            index.push_back(i);
            unite(edges[i][0],edges[i][1]);
        }
    }
    int i=index[index.size()-1];
    return edges[i];
        // return index;
    }
    
};
