class Solution {
public:
    int fibDp(int n, vector<int>&sol){
        if(n<=1) return n;
        if(sol[n]!=-1){
            return sol[n];
        }
        return sol[n]=fibDp(n-1,sol)+fibDp(n-2, sol);
    }
    int fib(int n) {
        vector<int>sol(n+1, -1);
        return fibDp(n, sol);
       
    }
};
