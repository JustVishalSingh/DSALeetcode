class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int l=0;
       int r= k;
       double sum=0;
       for(int i=0;i<r; i++){
            sum+=nums[i];
       }
        double max1= sum;
       while(r<nums.size()){
        max1=max(max1, sum);
        sum+=nums[r];
        sum-=nums[l];
        l++;
        r++;
       }
        max1=max(max1, sum);
        return max1/k;
    }
};