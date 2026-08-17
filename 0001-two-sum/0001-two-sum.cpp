class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;
        vector<int>p;
        int n=nums.size();
        for(int i=0; i<n;i++ ){
            int a=target-nums[i];
            if(mp.find(a)!=mp.end()){
               p.push_back(i);
               p.push_back(mp[a]);
            }
            mp.insert({nums[i], i});
        }
        return p;
    }
};