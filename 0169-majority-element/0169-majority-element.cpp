class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int val: nums){
           mp[val]++;
        }
        int maxval=0;
        int ans=nums[0];
        for(auto it: mp){
            if(it.second>maxval){
                maxval=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};