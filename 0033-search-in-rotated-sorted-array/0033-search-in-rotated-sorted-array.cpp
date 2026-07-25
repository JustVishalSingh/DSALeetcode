class Solution {
public:
    int pivote(vector<int>arr,int n){
        int s=0, e=n-1;
        int mid= s+(e-s)/2;
        while(s<e){
            if(arr[mid]>=arr[0]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid= s+(e-s)/2;
        }
        return s;
    }
    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int p=pivote(arr, n);
        int s=0, e=n-1;
        if(arr[p]<=target && target<=arr[e]){
            s=p;
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
        }
    
        else{
            e=p-1;
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

        }
        return -1;
    }
};