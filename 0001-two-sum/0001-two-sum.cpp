class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> p;
       unordered_map<int, int>mp;
       for(int i=0; i<nums.size(); i++){
            int n=target-nums[i];
            if(mp.find(n)==mp.end()){
               mp.insert({nums[i],i});
            }
            else{
                p.push_back(i);
                p.push_back(mp[n]);
            }
       }
       return p;
    }
};