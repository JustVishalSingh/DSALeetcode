class Solution {
public:
    int reverse(int x) {
        int digit=0;
        long long n=0;
        while(x!=0){
            digit=x%10;
            n=n*10+digit;
            x=x/10;
        }
        if(n>=-2147483648 && n<=2147483647 ){
            return n;
        }
        return 0;
    }
};