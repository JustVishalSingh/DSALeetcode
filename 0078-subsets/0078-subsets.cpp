class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();

        vector<vector<int>> ans;
        ans.reserve(1 << n);

        for(int i=0; i<(1<<n); i++){

            vector<int> num;
            for(int j=0; j<n; j++){
                if(i&(1<<j)){
                    num.push_back(nums[j]);
                }
            }
            ans.push_back(move(num));
        }
        return ans;
    }
};