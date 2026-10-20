class Solution {
public:
    int countPairs(vector<int>&arr, int start, int mid, int end){
        int right=mid+1;
        int cnt=0;
        for(int i=start; i<=mid; i++){
            while(right<=end && (long long)arr[i]>2LL*arr[right]){
                right++;
            }
            cnt+=right-(mid+1);
        }
        return cnt;
    }
    void merge(vector<int>& arr,vector<int>&temp, int start, int mid, int end) {
        int i = start, j = mid + 1, k=start;
        vector<int> mergeArr;
        while (i <= mid && j <= end) {
            if (arr[i] <= arr[j]) {
                temp[k++]=arr[i++];
            } else {
                temp[k++]=arr[j++];
            }
        }
        while (i <= mid) {
            temp[k++]=arr[i++];
        }
        while (j <= end) {
            temp[k++]=arr[j++];
        }
        for (int idx = start; idx <= end; idx++) {
            arr[idx] = temp[idx];
        }
    }
    int mergeSort(vector<int>& arr,vector<int>&temp, int start, int end) {
        if (start>=end) return 0;
        int mid = start + (end - start) / 2;
        // left
        int cnt=mergeSort(arr,temp, start, mid);
        // right
        cnt+=mergeSort(arr,temp, mid + 1, end);
        //count
        cnt+=countPairs(arr, start, mid, end);
        // merge
        merge(arr,temp, start, mid, end);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp(n);
        return mergeSort(nums,temp, 0,n-1);
    }
};