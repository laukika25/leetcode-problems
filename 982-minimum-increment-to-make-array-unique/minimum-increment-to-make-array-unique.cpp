class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int cnt = 0;
        int incr = 0;

        for(int i = 1; i<nums.size(); i++){
            if(nums[i-1] >= nums[i]){
                incr = nums[i-1] - nums[i] + 1;
                nums[i] += incr;
                cnt += incr;
            }
        }
        return cnt;
    }
};