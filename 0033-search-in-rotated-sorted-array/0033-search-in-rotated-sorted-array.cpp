class Solution {
public:
    int pivote(vector<int>&arr){
        int s=0;
        int e=arr.size()-1;
        while(s<e){
            int mid= s+(e-s)/2;
            if(arr[mid]>=arr[0]){
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        return s;
    }
    int binarySerch(vector<int>& arr, int target, int s, int e){
        while(s<=e){
            int mid= s+(e-s)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
       int  pv=pivote(nums);
        int e=nums.size()-1;
        int left=binarySerch(nums, target,0, pv-1);
        if(left!=-1){
            return left;
        }
        return binarySerch(nums, target,pv, e);
    }
};