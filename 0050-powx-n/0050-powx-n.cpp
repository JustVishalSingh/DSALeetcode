class Solution {
public:
    double powerSolve(double x, long long n){
        if(n==1) return x;
        else if(n==0) return 1;
        else if(n<0){
            return powerSolve(1.0/x , -n);
        }
        else if(n%2==0){
            return powerSolve(x*x, n/2);
        }
        else{
            return x*powerSolve(x*x, (n-1)/2);
        }
    }
    double myPow(double x, int n) {
        return powerSolve(x, n);
    }
};