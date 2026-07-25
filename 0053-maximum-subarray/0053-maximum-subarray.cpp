class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cSum=0;
        int maxSum=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            cSum+=nums[i];
            maxSum=max(cSum, maxSum);
            if(cSum<0){
                cSum=0;
            }
        }
        return maxSum;
    }
};