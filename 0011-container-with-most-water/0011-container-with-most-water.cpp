class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0;
        int high=height.size()-1;
        int maxm= 0;
        while(low<high){
            int breadth=high-low;
            int area=0;
            if(height[high]<height[low]){
                area = breadth*height[high];
                high--;
            }
            else{
                area= breadth*height[low];
                low++;
            }
            if(maxm<area){
                maxm = area;
            }
        }
        return maxm;
    }
};