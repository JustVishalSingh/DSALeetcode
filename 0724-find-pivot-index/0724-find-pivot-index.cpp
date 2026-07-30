class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int tsum=0;
    for (int i = 0; i < arr.size(); i++)
    {
        tsum+=arr[i];
    }
    int lsum=0;
    for (int i = 0; i < arr.size(); i++)
    {
        int rsum=tsum-lsum-arr[i];
        if (lsum==rsum)
        {
            return i;
        }
        lsum+=arr[i];
    }
    return -1;
    }
};