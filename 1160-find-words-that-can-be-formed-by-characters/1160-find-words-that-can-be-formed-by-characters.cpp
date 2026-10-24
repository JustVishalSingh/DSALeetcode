class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int>freq;
        int sum=0;
        for(char ch: chars){
            freq[ch]++;
        }
        for(int i=0; i<words.size(); i++){
            unordered_map<char, int>chfreq;
            for(char ch : words[i]){
                chfreq[ch]++;
            }
            bool good=true;
            for(char ch : words[i]){
                if(freq[ch]<chfreq[ch]){
                    good=false;
                    break;
                }
            }
            if(good){
                sum+=words[i].size();
            }

        }
        return sum;
    }
};