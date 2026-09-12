class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n<2){
            return nums[n-1];
        }
        else{
            vector<int>sol(n, -1);
            sol[0]=nums[0];
            sol[1]=max(nums[0], nums[1]);
            for(int i=2; i<n; i++){
                sol[i]=max(sol[i-1],sol[i-2]+nums[i]);
            }
            return sol[n-1];
        }
    }
};