class Solution {
public:
    int maximumProduct(vector<int>& arr) {
        int num=arr.size();
        int n=num-1;
        int maxp=INT_MIN;
        sort(arr.begin(), arr.end());
        maxp=max(maxp, arr[n]* arr[n-1]*arr[n-2]);
        maxp=max(maxp, arr[0]*arr[1]*arr[n]);
        maxp=max(maxp, arr[0]*arr[1]*arr[2]);
        return maxp;
    }
};