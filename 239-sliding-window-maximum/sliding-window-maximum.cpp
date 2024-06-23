#include <vector>
#include <set>
#include <algorithm>

class Solution {
public:
    std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k) {
        std::multiset<int> window;
        std::vector<int> result;
        
        for (int i = 0; i < nums.size(); ++i) {
            // Add the current element to the multiset
            window.insert(nums[i]);
            
            // Remove the element that is out of the window
            if (i >= k) {
                window.erase(window.find(nums[i - k]));
            }
            
            // Add the maximum element of the current window to the result list
            if (i >= k - 1) {
                result.push_back(*window.rbegin());
            }
        }
        
        return result;
    }
};
