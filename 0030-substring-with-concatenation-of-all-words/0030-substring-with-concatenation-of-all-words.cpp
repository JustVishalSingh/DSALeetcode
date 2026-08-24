class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string,int>frq;
        for(string str: words){
            frq[str]++;
        }

        vector<int>ans;
        int totalWord=words.size();
        int len= words[0].length();
        int n=s.length();
        for(int start=0; start<len; start++){
            int i=start;
            int j=i+totalWord*len;
            while(j<=n){
                unordered_map<string, int> mp;

                for (int k = i; k<j ; k += len) {
                    string temp = s.substr(k, len);
                    mp[temp]++;
                }

                if(mp==frq){
                    ans.push_back(i);
                }

                i+=len;
                j+=len;
            }
        }
        return ans;
    }
};