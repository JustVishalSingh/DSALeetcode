class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int sum=0;
        int ans;
            int diff=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int j=i+1, k=nums.size()-1;
            while(j<k){
                int ndiff=0;
                sum=nums[i]+nums[j]+nums[k];
                if(sum<target){
                    ndiff=target-sum;
                    j++;
                }
                else{
                    ndiff=sum-target;
                    k--;
                }
                if(ndiff<diff){
                    diff=ndiff;
                    ans=sum;
                }
            }
        }
        return ans;
    }
};