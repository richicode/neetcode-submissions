class Solution {
public:
    int reverse(int x) {
        string s=to_string(x);
        bool isNeg=s[0]=='-';
        std::reverse(s.begin(),s.end());
        long long a=stoll(s);
        if (a>INT_MAX)return 0;
        int ans=a;
        if(isNeg)return -ans;
        return ans;
    }
};
