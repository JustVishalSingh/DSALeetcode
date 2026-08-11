class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        int subSet=1<<n;
        for(int i=0; i<subSet; i++){
            vector<int> num;
            for(int j=0; j<n; j++){
                if(i&(1<<j)){
                    num.push_back(nums[j]);
                }
            }
            ans.push_back(num);
        }
        return ans;
    }
};