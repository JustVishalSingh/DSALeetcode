class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>mp;
        mp.reserve(nums.size());
        for(int x: nums){
            if(mp.find(x)!=mp.end()){
                return true;
            }
            mp.insert(x);  
        }
        return false;
    }
};