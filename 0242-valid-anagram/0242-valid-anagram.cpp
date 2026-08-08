class Solution {
public:
    bool isAnagram(string s, string t) {
        // for (char &c : s){
        // c = tolower(c);
    //}
        sort(s.begin(),s.end());

        // for (char &c : t){
        // c = tolower(c);
    //}
        sort(t.begin(), t.end());
        if(t==s){
            return true;
        }
        return false;
    }
};