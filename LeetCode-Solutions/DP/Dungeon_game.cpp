class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int row = dungeon.size();
        int col = dungeon[0].size();
        
        for(int i=row-1; i>=0; i--){
            for(int j=col-1; j>=0; j--){
                dungeon[i][j] = -dungeon[i][j];
                
                if(i==row-1 && j==col-1) continue;
                if(dungeon[i][j] > 0)
                    dungeon[i][j] += min(i+1<row?(dungeon[i+1][j] > 0 ? dungeon[i+1][j]:0):INT_MAX, j+1<col?(dungeon[i][j+1] > 0 ? dungeon[i][j+1]:0):INT_MAX);
                else
                    dungeon[i][j] += min(i+1<row?(dungeon[i+1][j]):INT_MAX, j+1<col?(dungeon[i][j+1]):INT_MAX);
                    
            }
        }        
        return dungeon[0][0] > 0 ? dungeon[0][0]+1 : 1;
    }
};