class Solution {
public:
    int climbStairs(int n) {
        int arr[n];
        for (int i=0;i<n;i++){
            arr[i]=0;
        }
        if(n<=2){
            if(n==1){
                return 1;
            }
            if(n==2){
                return 2;
            }
        }
        arr[0]=1;
        arr[1]=2;
        for(int i=2;i<n;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        
        return arr[n-1];
    }
};