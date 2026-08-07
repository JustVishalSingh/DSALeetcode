class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int st=0;
        int n=s.size();
        int res=0;
        unordered_map<char, int>mp;
        for(int i=0; i<n; i++){
            while(mp.find(s[i])!=mp.end()){
                mp.erase(s[st]);
                st++;
            }
            mp.insert({s[i],i});
            res=max(res, i-st+1);
        }
        return res;
    }
};