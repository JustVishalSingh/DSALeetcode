class Solution {
public:
    int countBit(int num){
        int count=0;
        while(num!=0){
            if((num&1)==1){
                count++;
            }
            num=num>>1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>bit;
        int c=0;
        while(c<=n){
            int res=countBit(c);
            bit.push_back(res);
            c++;
        }
        return bit;
    }
};