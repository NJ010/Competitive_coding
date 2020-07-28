class Solution {
public:
    
    int nthUglyNumber(int n) {
        long long ugly=1;
        set<long long> possible,ans;
        ans.insert(1);
        possible.insert(1);
        while(ans.size() !=n){
            long long nextugly=*possible.begin();
            possible.erase(nextugly);
            
            possible.insert(2*nextugly);
            possible.insert(3*nextugly);
            possible.insert(5*nextugly);
         
            ans.insert(nextugly);

        }
        // cout<<*ans.rend()<<endl;
        // cout<<*ans.end()<<endl;
        // cout<<*ans.rbegin()<<endl;
        // cout<<*ans.begin()<<endl;
        
        return *ans.rbegin();
    }
};