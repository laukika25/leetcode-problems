class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini = 1e9;
        int maxi = -1;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] <= mini){
                mini = nums[i];
            }
            else{
                maxi = max(maxi, nums[i] - mini);
            }
        }
        return maxi;
    }
};