class Solution {
public:
    int longestSubarray(std::vector<int>& nums, int limit) {
        multiset<int> window;
        int left = 0, right = 0, maxlen = 0;
        
        while (right < nums.size()) {
            window.insert(nums[right]);
            
            while (*window.rbegin() - *window.begin() > limit) {
                window.erase(window.find(nums[left]));
                left++;
            }
            
            maxlen = std::max(maxlen, right - left + 1);
            right++;
        }
        
        return maxlen;
    }
};
