class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }

        int ans = 0;
        bool oddCountFound = false;

        for (auto& entry : mp) {
            if (entry.second % 2 == 0) {
                ans += entry.second;
            } else {
                ans += entry.second - 1;
                oddCountFound = true;
            }
        }
        if (oddCountFound) {
            ans += 1;
        }

        return ans;
    }
};
