class Solution {
public:
    bool binarySearch(vector<int>&arr, int target){
        int start=0, end=arr.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==target){
                return true;
            }
            else if(arr[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return false;
    }
    int findKthPositive(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        vector<int>mis;
        mis.reserve(k);
        int i=1;
        while(mis.size()<k){
            if(!binarySearch(arr, i)){
                mis.push_back(i);
            }
            i++;
        }
        return mis[k-1];
    }
};