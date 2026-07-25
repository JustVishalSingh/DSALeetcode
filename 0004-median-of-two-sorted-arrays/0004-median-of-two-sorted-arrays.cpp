class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();

        int i=m-1;
        int j=n-1;

        int s=m+n;
        int idx=s-1;

        vector<int> array(s);
        double median;
        while(j>=0 && i>=0){
            if(nums1[i]>=nums2[j]){
                array[idx]=nums1[i];
                i--;
            }
            else{
                array[idx]=nums2[j];
                j--;
            }
            idx--;
        }
        while(i>=0){
            array[idx]=nums1[i];
                i--;
                idx--;
        }
        while(j>=0){
            array[idx]=nums2[j];
                j--;
                idx--;
        }
        if(s%2==0&& s!=1){
            int k=s/2;
            return (array[k-1]+array[k])/2.0;
        }
        else if(s==1){
            return array[s-1];
        }
        else{
            int k=s/2;
            return array[k];
        }
    }
};