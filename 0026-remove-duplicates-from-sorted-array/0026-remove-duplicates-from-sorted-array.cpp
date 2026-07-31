class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int i=0, j=1;
        while(j<arr.size()){
            if(arr[i]==arr[j]){
                j++;
            }
            else{
                swap(arr[i+1], arr[j]);
                i++;
                j++;
            }
        }
        return i+1;
    }
};