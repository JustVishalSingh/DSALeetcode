class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        int i=0;
        int n=nums.size();
        int j=0;
        while(i<n){
            string s="";
            if((i+1)<n && nums[i]+1==nums[i+1]){
                i++;
            }
            else{
                s.insert(0, to_string(nums[j]));
                if(j != i) {
                    s += "->" + to_string(nums[i]);
                }
                ans.push_back(s);
                i++;
                j=i;
            }
        }
        return ans;
    }
};