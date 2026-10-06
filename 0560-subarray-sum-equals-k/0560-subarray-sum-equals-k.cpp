class Solution {
public:
    // int sumarr(vector<int>&nums, int s, int e){
    //     int sum=0;
    //     for(int i=s; i<=e; i++){
    //         sum+=nums[i];
    //     }
    //     return sum;
    // }
    int subarraySum(vector<int>& nums, int k) {
       int ans=0;
       int n=nums.size();
       for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<n; j++){
            sum+=nums[j];
            if(sum==k){
                ans++;
            }
        }
       }
       return ans;
    }
};