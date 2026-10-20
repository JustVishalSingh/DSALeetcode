class Solution {
public:
    int countPairs(vector<int>&arr, int start, int mid, int end){
        int right=mid+1, cnt=0;
        for(int i=start; i<=mid; i++){
            while(right<=end && arr[i]>2LL*arr[right]){
                right++;
            }
            cnt+=(right-(mid+1));
        }
        return cnt;
    }
    void merge(vector<int>& arr, int start, int mid, int end) {
        int i = start, j = mid + 1;
        vector<int> mergeArr;
        while (i <= mid && j <= end) {
            if (arr[i] <= arr[j]) {
                mergeArr.push_back(arr[i]);
                i++;
            } else {
                mergeArr.push_back(arr[j]);
                j++;
            }
        }
        while (i <= mid) {
            mergeArr.push_back(arr[i]);
            i++;
        }
        while (j <= end) {
            mergeArr.push_back(arr[j]);
            j++;
        }
        for (int idx = 0; idx < mergeArr.size(); idx++) {
            arr[start + idx] = mergeArr[idx];
        }
    }
    int mergeSort(vector<int>& arr, int start, int end) {
        int cnt=0;
        if (start>=end) return cnt;
        int mid = start + (end - start) / 2;
        // left
        cnt+=mergeSort(arr, start, mid);
        // right
        cnt+=mergeSort(arr, mid + 1, end);
        //count
        cnt+=countPairs(arr, start, mid, end);
        // merge
        merge(arr, start, mid, end);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        int end=nums.size()-1;
        return mergeSort(nums, 0,end);
    }
};