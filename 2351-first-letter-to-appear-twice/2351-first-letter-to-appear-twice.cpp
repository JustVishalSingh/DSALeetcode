class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp;
        for(char c : s){
            if(mp.find(c)!=mp.end()){
                return c;
            }
            else{
                mp[c]++;
            }
        }
        return ' ';
    }
};