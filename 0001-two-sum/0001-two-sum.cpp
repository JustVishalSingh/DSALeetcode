class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;
        vector<int>p;
        mp.reserve(nums.size());
        for(int i=0; i<nums.size();i++ ){
            int a=target-nums[i];
            if(mp.find(a)!=mp.end()){
                return{mp[a], i};
            }
            mp[nums[i]]=i;
        }
        return p;
    }
};