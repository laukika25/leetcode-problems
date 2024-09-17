class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prodMax = nums[0];
        int prodMin = nums[0];  
        int res = nums[0];
        
        for(int i = 1; i < nums.size(); i++) {
            int tempMax = max(nums[i], max(nums[i] * prodMax, nums[i] * prodMin));
            prodMin = min(nums[i], min(nums[i] * prodMax, nums[i] * prodMin));
            prodMax = tempMax;
            res = max(res, prodMax);
        }
        
        return res;
    }
};
