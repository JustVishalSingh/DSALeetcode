class Solution {
public:
    long long totleHours(vector<int>&arr, int hours){
        long long totlehours=0;
        for(int i=0; i<arr.size(); i++){
            totlehours+=(arr[i] + (long long)hours - 1) / hours;
        }
        return totlehours;
    }
    int binarySearch(vector<int>&arr, int h){
        int start=1;
        int end=*max_element(arr.begin(), arr.end());
        while(start<=end){
            int mid=start+(end-start)/2;
            long long totlehours=totleHours(arr, mid);
            if(totlehours<=h){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return start;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        return binarySearch(piles, h);
    }
};