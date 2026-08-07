class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double sum=0;
       for(int i=0;i<k; i++){
            sum+=nums[i];
       }
        double max1= sum;
    //    while(r<nums.size()){
    //     max1=max(max1, sum);
    //     sum+=nums[r];
    //     sum-=nums[l];
    //     l++;
    //     r++;
    //    }
    for(int i=k; i<nums.size();i++){
        sum=sum-nums[i-k]+nums[i];
        max1=max(max1, sum);
    }
        return max1/k;
    }
};