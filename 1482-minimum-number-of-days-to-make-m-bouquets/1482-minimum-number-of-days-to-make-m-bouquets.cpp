class Solution {
public:
    int helper(vector<int>&arr, int day, int numfl,int numbq){
        int countfl=0, countbq=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=day){
                countfl++;
                if (countfl == numfl) {
                    countbq++;
                    countfl = 0;
                }
            }
            else{
                countfl=0;
            }
        }
        return countbq;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size()<(1LL*m*k)){
            return -1;
        }
        else{
            int start= *min_element(bloomDay.begin(), bloomDay.end());
            int end= *max_element(bloomDay.begin(), bloomDay.end());
            while(start<=end){
                int mid=start+(end-start)/2;
                int numbqt=helper(bloomDay, mid,k,m);
                if(numbqt>=m){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            return start;
        }
    }
};