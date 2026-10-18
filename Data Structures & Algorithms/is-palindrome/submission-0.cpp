class Solution {
public:
    bool isPalindrome(string s) {
        string t="";
        for(char c:s){
            if(isalnum(c))t+=tolower(c);
        }
        string q=t;
        reverse(t.begin(),t.end());
        return q==t;
    }
};
