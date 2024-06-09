class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int min1 = nums[0];
        int min2 = nums[1];
        int max1 = nums[n-1];
        int max2 = nums[n-2];
        return (max2 * max1) - (min1 * min2);
        
    }
};