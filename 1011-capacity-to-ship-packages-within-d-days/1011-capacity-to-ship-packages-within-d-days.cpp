class Solution {
public:
    int helper(vector<int>&arr, int capacity ){
        int numsDay=1;
        int filled=0;
        for(int i=0; i<arr.size(); i++){
            if(filled+arr[i]>capacity){
                numsDay++;
                filled=0;
            }
            filled+=arr[i];
        }
        return numsDay;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int end=0; 
        int start=*max_element(weights.begin(), weights.end());
        for(int i : weights){
            end+=i;
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            int numsDay=helper(weights, mid);
            if(numsDay>days){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return start;
    }
};