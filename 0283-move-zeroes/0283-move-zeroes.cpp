class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int i=0, j=0;
        while(i<arr.size()){
            if(arr[i]==0){
                i++;
            }
            else if(arr[i]!=0){
                swap(arr[i], arr[j]);
                i++;
                j++;
            }
        }
    }
};