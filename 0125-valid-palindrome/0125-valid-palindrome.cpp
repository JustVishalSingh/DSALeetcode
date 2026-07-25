class Solution {
public:
    bool isPalindrome(string line) {
        string str;
        for (char ch: line) {
            ch=tolower(ch);
           if(isalnum(ch)){
            str+=ch;
           }
        }
        string orig=str;
        int st=0;
        int end=str.length()-1;
        while(st<end){
            swap(str[st++],str[end--]);
        }
        if(str==orig){
            return true;
        }
        else{
            return false;
        }
    }
};