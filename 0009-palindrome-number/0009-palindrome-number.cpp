class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        long revnum=0;
        while(x>0){
            revnum = revnum*10+x%10;
            x = x/10;
        }
        if(revnum==n){
            return true;
        }
        else{
            return false;
        }
    }
};