class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 1)return 1;
        vector<int>hash(256, -1);
        int l = 0;
        int r = 0;
        int maxlen = 0;
        int len = 0;
        while(r < s.length()){
            if(hash[s[r]] != -1){
                if(hash[s[r]] >= l){
                    l = hash[s[r]] + 1;
                }
            }
            len = r-l+1;
            maxlen = max(maxlen, len);
            hash[s[r]] = r;
            r++;
            
        }
        return maxlen;
    }
};