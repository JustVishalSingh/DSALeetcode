class Solution {
public:
    bool isValid(vector<int>&arr, int maxAllow,int k){
        int split=1;
        int limit=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>maxAllow) return false;
            if(limit+arr[i]<=maxAllow){
                limit+=arr[i];
            }
            else{
                limit=arr[i];
                split++;
                if(split>k) return false;
            }
        }
        if(split<=k){
            return true;
        }
        return false;
    }
    int splitArray(vector<int>& nums, int k) {
        if(nums.size()<k){
            return -1;
        }
        int st=*max_element(nums.begin(), nums.end());
        int end=0;
        int ans=-1;
        for(int i : nums){
            end+=i;
        }
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isValid(nums, mid, k)){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return ans;
    }
};