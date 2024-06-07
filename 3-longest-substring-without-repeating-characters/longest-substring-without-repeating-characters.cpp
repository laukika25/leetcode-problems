class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 1)return 1;
        int l = 0, r = 0;
        int maxlen = 0, len = 0;
        vector<int>hash(256, -1);
        int n = s.size();

        while(r < n){
            if(hash[s[r]] != -1){
                if(hash[s[r]] >= l){
                    l = hash[s[r]] + 1;
                }
            }
            len = r - l + 1;
            maxlen = max(maxlen, len);
            hash[s[r]] = r;
            r++;

        }
        return maxlen;
    }
};