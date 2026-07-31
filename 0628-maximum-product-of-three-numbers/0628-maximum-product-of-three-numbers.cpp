class Solution {
public:
    int maximumProduct(vector<int>& arr) {
        int num=arr.size();
        int n=num-1;
        int maxp=INT_MIN;
        sort(arr.begin(), arr.end());
        return max(arr[n]* arr[n-1]*arr[n-2], arr[0]*arr[1]*arr[n]);
    }
};