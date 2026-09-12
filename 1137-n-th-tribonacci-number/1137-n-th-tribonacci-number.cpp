class Solution {
public:
    // int helper(int n, vector<int>dpm){
    //     if(n<=1){
    //         return n;
    //     }
    //     if(n==2){
    //         return dpm[2]=dpm[0]+dpm[1];
    //     }
    //     if(dpm[n]!=-1){
    //         return dpm[n];
    //     }
    //     return dpm[n]=helper(n-1, dpm)+helper(n-2,dpm)+helper(n-3, dpm);
    // }

    int tribonacci(int n) {
        vector<int>dpm(n+2, -1);
        dpm[0]=0;
        dpm[1]=1;
        if(n<=1){
            return dpm[n];
        }
        else if(n==2){
            return dpm[1];
        }
        dpm[2]=1;
        for(int i=3;i<=n; i++){
            dpm[i]=dpm[i-1]+dpm[i-2]+dpm[i-3];
        }
       return dpm[n];
    }
};