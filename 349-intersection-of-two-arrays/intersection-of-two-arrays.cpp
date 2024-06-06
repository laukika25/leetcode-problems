class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> result;
        
        for (int num : nums2) {
            if (s1.find(num) != s1.end()) {
                result.insert(num);
            }
        }
        
        return vector<int>(result.begin(), result.end());
    }
};
