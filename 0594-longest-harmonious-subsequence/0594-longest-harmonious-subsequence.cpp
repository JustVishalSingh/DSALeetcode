class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int val: nums){
            mp[val]++;
        }
        int ans=0;
        for(auto &[key,value]: mp){
            if(mp.find(key+1)!=mp.end()){
                ans=max(ans, mp[key+1]+value);
            }
        }
        return ans; 
    }
};