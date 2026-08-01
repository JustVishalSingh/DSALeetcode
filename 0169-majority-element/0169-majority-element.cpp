class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x: nums){
            freq[x]++;
        }
        int maxFreq = 0;
    int ans = nums[0];
    for (auto p : freq) {
        if (p.second > maxFreq) {
            maxFreq = p.second;
            ans = p.first;
        }
    }

    return ans;
    }
};