class Solution {
public:
   bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxIndex = 0;
        for(int i = 0; i < n; i++)
        {
            if(maxIndex < i)
                return false;
            int reach = i + nums[i];
            maxIndex = max(maxIndex, reach);
        }
        return true;
    }
};#include <iostream>
using namespace std;
int main() {
    cout<<"Hello World!";
}
