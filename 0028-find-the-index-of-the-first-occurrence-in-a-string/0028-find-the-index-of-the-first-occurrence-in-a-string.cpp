class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.size();
        int n=needle.size();
        int i=0, j=0;
        int k=0;
        while(j<h){
            if(haystack[j]==needle[k]){
                j++;
                k++;
                
            }
            else{
                i++;
                j=i;
                k=0;
            }
            if(k==(n)){
                return i;
            }
        }
        return -1;
    }
};