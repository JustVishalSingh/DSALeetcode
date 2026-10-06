class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rn=matrix.size();
        int cn=matrix[0].size();
        int rs=0, re=rn-1;
        while(rs<=re){
            int rmid= rs+(re-rs)/2;
            if(target<=matrix[rmid][cn-1]&& target>=matrix[rmid][0]){
                int cs = 0;
                int ce = cn - 1;
                while(cs<=ce){
                    int cmid=cs+(ce-cs)/2;
                    if(target==matrix[rmid][cmid]){
                        return true;
                    }
                    else if(target>matrix[rmid][cmid]){
                        cs=cmid+1;
                    }
                    else{
                        ce=cmid-1;
                    }
                }
                return false;
            }
            else if(target>matrix[rmid][cn-1]){
                rs=rmid+1;
            }
            else{
                re=rmid-1;
            }
        }
        return false;
    }
};