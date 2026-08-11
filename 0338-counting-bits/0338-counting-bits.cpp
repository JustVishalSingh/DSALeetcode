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
        while(n>=0){
            bit.insert(bit.begin(),countBit(n));
            n--;
        }
        return bit;
    }
};