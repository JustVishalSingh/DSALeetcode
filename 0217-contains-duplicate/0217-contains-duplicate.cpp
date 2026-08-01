class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> mp;

    for (int x : nums) {
        if (!mp.insert(x).second) {
            return true;
        }
    }
    return false;
    }
};